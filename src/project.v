/*
 * Copyright (c) 2024 Your Name
 * SPDX-License-Identifier: Apache-2.0
 */

`default_nettype none

module tt_um_eight_bit_counter (
    input  wire [7:0] ui_in,    // Dedicated inputs
    output wire [7:0] uo_out,   // Dedicated outputs
    input  wire [7:0] uio_in,   // IOs: Input path
    output wire [7:0] uio_out,  // IOs: Output path
    output wire [7:0] uio_oe,   // IOs: Enable path (active high: 0=input, 1=output)
    input  wire       ena,      // always 1 when the design is powered, so you can ignore it
    input  wire       clk,      // clock
    input  wire       rst_n     // reset_n - low to reset
);
  reg[7:0] count = 0; // Counter value

  assign uo_out = ena ? count : 8'bz; // Outputs count value or High-Z based on ena

  always @ (posedge clk or negedge rst_n) begin
    if(!rst_n)
        count <= 0; // Reset count
    else if(uio_in[0]) // Enable setting the counter to desired value read in ui_in when uio_in[0] is high 
        count <= ui_in; // Set count to desired value
    else
        count <= count + 1; // Count up
  end

  // All output pins must be assigned. If not used, assign to 0.
  assign uio_out = 0;
  assign uio_oe  = 0;

  // List all unused inputs to prevent warnings
  wire _unused = &{ena, clk, rst_n, 1'b0};

endmodule