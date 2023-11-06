#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#define MAX_SIM_CYC 1500

int main(int argc, char **argv, char **env) {
  int simcyc;     
  int tick;       
  int lights = 0; 
  bool user_switch_pressed = false;  

  Verilated::commandArgs(argc, argv);

  Vtop * top = new Vtop;

  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("clktick.vcd");

  if (vbdOpen()!=1) return(-1);
  vbdHeader("Task 4 F1");
  // Set Vbuddy to one-shot mode
  // vbdSetMode(1);

  top->clk = 1;
  top->rst = 0;
  top->trigger = 0;

  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    // Display toggle neopixel
    vbdBar(top->data_out & 0xFF);

    top->rst = (simcyc < 2);
    top->trigger = vbdFlag();
    vbdCycle(simcyc);

    // detect LED off
    if (top->data_out == 0) {  
        vbdInitWatch();
    }

    // detect botton pressed
    user_switch_pressed = vbdFlag();  
    if (! user_switch_pressed) {
      vbdElapsed();
    }
    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();
  tfp->close(); 
  exit(0);
}
