`timescale 1ns / 1ps

module tt_um_eight_bit_counter (
    input reg clk, // Clock
    input reg rst, // Reset counter to 0 when high
    input reg set_val_ena, // Enable setting the counter to 'val' (desired value) when high 
    input reg out_ena, // Enable counter output when high
    input reg[7:0] val, // Value to set counter to
    output wire[7:0] display_val // Value to output/display
);
    reg[7:0] count = 0; // Counter value

    assign display_val = out_ena ? count : 8'bz; // Outputs count value or High-Z based on out_ena

    always @ (posedge clk or posedge rst) begin
        if(rst)
            count <= 0; // Reset count
        else if(set_val_ena)
            count <= val; // Set count to desired value
        else
            count <= count + 1; // Count up
    end
endmodule