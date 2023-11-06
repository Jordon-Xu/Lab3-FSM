// #include "Vlfsr.h"
// #include "verilated.h"
// #include "verilated_vcd_c.h"
// #include "vbuddy.cpp"

// int main(int argc, char **argv, char **env) {
//     int clk;

//     Verilated::commandArgs(argc, argv);

//     // init top verilog instance
//     Vlfsr* top = new Vlfsr;

//     // init trace dump
//     Verilated::traceEverOn(true);
//     VerilatedVcdC* tfp = new VerilatedVcdC;
//     top->trace(tfp, 99);
//     tfp->open("lfsr.vcd");

//     // init Vbuddy
//     if (vbdOpen()!=1) return(-1);
//     vbdHeader("Lab: LFSR");
//     vbdSetMode(1);

//     // initialize simulation inputs
//     top->clk = 1;
//     top->rst = 1;
//     top->en = 0; // Initially, do not enable the LFSR

//     // run simulation for many clock cycles
//     for (int i=0; i<3000; i++) {

//         // dump variables into VCD file and toggle clock
//         for (clk=0; clk<2; clk++) {
//             tfp->dump(2*i+clk);  // unit is in ps!!!
//             top->clk = !top->clk;
//             top->eval();
//         }

//         // Send LFSR value to Vbuddy
//         vbdHex(1, top->data_out & 0xF);
//         vbdBar(top->data_out & 0xFF);

//         // Check Vbuddy button press to enable LFSR update
//         top->en = vbdFlag();

//         if (Verilated::gotFinish()) exit(0);
//     }

//     vbdClose(); // ++++
//     tfp->close();
//     exit(0);
// }


#include "Vlfsr.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vlfsr* top = new Vlfsr;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("lfsr.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("LFSR Random Number Generator Test");

    // Set Vbuddy to one-shot mode
    vbdSetMode(1);

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    // run simulation for many clock cycles
    for (i=0; i<20; i++) {

        // dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++) {
            tfp->dump(2*i+clk);  // unit is in ps!!!
            top->clk = !top->clk;
            top->eval();
        }

        // Send data_out value to Vbuddy
        vbdHex(1, top->data_out & 0xF);
        vbdBar(top->data_out & 0xFF);

        vbdCycle(i+1);

        // Check Vbuddy flag for enable signal
        top->en = vbdFlag();

        // Reset only on the first cycle
        if (i == 0) {
            top->rst = 1;
        } else {
            top->rst = 0;
        }

        if (Verilated::gotFinish()) exit(0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}