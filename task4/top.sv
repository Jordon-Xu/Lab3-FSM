module top (
    input logic clk,
    input logic rst,
    input logic trigger,
    output logic [7:0] data_out,
    output logic tick,
    output logic time_out,
    output logic cmd_delay
);

logic cmd_seq, en_temp;
logic [6:0] random_out;
// assign cmd_seq = 1;

clktick clk_divider (
    .clk(clk),
    .rst(rst),
    .en(cmd_seq),
    .N(5'd30),
    .tick(tick)
);

lfsr random_gen (
    .clk(clk),
    .rst(rst),
    .K(random_out)
);

delay delay_module (
    .clk(clk),
    .rst(rst),
    .trigger(cmd_delay),  
    .n(random_out),       
    .time_out(time_out)
);

assign en_temp = cmd_seq ? tick : time_out;
// assign en_temp = tick;


f1_fsm fsm (
    .clk(clk),
    .rst(rst),
    .en(en_temp),
    .trigger(trigger),
    .data_out(data_out),
    .cmd_seq(cmd_seq),
    .cmd_delay(cmd_delay)
);

endmodule
