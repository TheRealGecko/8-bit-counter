`timescale 1ns / 1ps

module tt_um_eight_bit_counter_tb;
    reg clk; // Clock
    reg rst; // Reset counter to 0 when high
    reg set_val_ena; // Enable setting the counter to 'val' (desired value) when high 
    reg out_ena; // Enable counter output when high
    reg[7:0] val; // Value to set counter to
    wire[7:0] display_val; // Value to output/display

    tt_um_eight_bit_counter dut (
        .clk (clk),
        .rst (rst),
        .set_val_ena (set_val_ena),
        .out_ena (out_ena),
        .val (val),
        .display_val (display_val)
    );

    initial begin
        clk <= 0;
        forever #5 clk <= ~clk;
    end

    initial begin
        #3000
        $finish;
    end

    initial begin
        rst <= 0;
        #42
        rst <= 1;
        #5
        rst <= 0;
    end

    initial begin
        set_val_ena <= 0;
        #22
        set_val_ena <= 1;
        #5
        set_val_ena <= 0;
    end

    initial begin
        out_ena <= 0;
        #7
        out_ena <= 1;
    end

    initial begin
        val <= 0;
        #12
        val <= 8'b0000101;
    end

    initial  begin
        $dumpfile("counter.vcd");
        $dumpvars;
    end 
endmodule;