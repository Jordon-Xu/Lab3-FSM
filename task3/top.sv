module top (
    input logic clk,       // clock signal
    input logic rst,       // reset signal
    input logic en,        // enable signal from an external source (like a button)
    output logic [7:0] data_out  // output of the fsm
);

    // Parameters for clktick (assuming some default value, change if needed)
    parameter WIDTH = 16;
    logic tick; // tick signal from clktick to f1_fsm
    
    // Instance of clktick
    clktick #(
        .WIDTH(WIDTH)
    ) my_clktick (
        .clk(clk),
        .rst(rst),
        .en(en),
        .N(5'd24), // Just a default value, you can change this
        .tick(tick)
    );

    // Instance of f1_fsm
    f1_fsm my_fsm (
        .clk(clk),
        .rst(rst),
        .en(tick),       // connect tick from clktick to the enable of the fsm
        .data_out(data_out)
    );

endmodule
