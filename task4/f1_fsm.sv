module f1_fsm (
    input logic clk,
    input logic rst,
    input logic en,
    input logic trigger,
    output logic [7:0] data_out,
    output logic cmd_seq,        
    output logic cmd_delay
);
    logic [7:0] out;
    typedef enum  {S0, S1, S2, S3, S4, S5, S6, S7, S8} my_state;
    my_state current_state, next_state;

    always_ff @(posedge clk, posedge rst)
        if (rst) current_state <= S0;
        else current_state <= next_state;

    always_comb
        case (current_state)
            S0: if (en & trigger) next_state = S1;
            S1: if (en) next_state = S2;
            S2: if (en) next_state = S3;
            S3: if (en) next_state = S4;
            S4: if (en) next_state = S5;
            S5: if (en) next_state = S6;
            S6: if (en) next_state = S7;
            S7: if (en) next_state = S8;
            S8: if (en) next_state = S0;
            default: next_state = S0;
        endcase

    always_comb
        case (current_state)
            S0: begin
                out = 8'b0; 
                cmd_seq = 1'b1; 
                cmd_delay = 1'b0;
            end
            S1: begin
                out = 8'b1; 
                cmd_seq = 1'b1; 
                cmd_delay = 1'b0;
            end
            S2: begin
                out = 8'b11; 
                cmd_seq = 1'b1; 
                cmd_delay = 1'b0;
            end
            S3: begin
                out = 8'b111; 
                cmd_seq = 1'b1; 
                cmd_delay = 1'b0;
            end
            S4: begin
                out = 8'b1111; 
                cmd_seq = 1'b1; 
                cmd_delay = 1'b0;
            end
            S5: begin
                out = 8'b11111; 
                cmd_seq = 1'b1; 
                cmd_delay = 1'b0;
            end
            S6: begin
                out = 8'b111111; 
                cmd_seq = 1'b1; 
                cmd_delay = 1'b0;
            end
            S7: begin
                out = 8'b1111111; 
                cmd_seq = 1'b1; 
                cmd_delay = 1'b0;
            end
            S8: begin
                out = 8'b11111111; 
                cmd_seq = 1'b0; 
                cmd_delay = 1'b1;
            end
            default: begin
                out = 8'b0; 
                cmd_seq = 1'b1; 
                cmd_delay = 1'b0;
            end
        endcase

    assign data_out = out;

endmodule
