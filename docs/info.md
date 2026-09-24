<!---

This file is used to generate your project datasheet. Please fill in the information below and delete any unused
sections.

You can also include images in this folder and reference them in the markdown. Each image must be less than
512 kb in size, and the combined size of all images must be less than 1 MB.
-->

## How it works

This is an 8-bit programmable counter with:
- Asynchronous reset
    - Reset counter to ``0`` when ``rst_n``is low 
- Synchronous load
    - Counter value updated on rising edge of ``clk``
    - if ``uio_in[0]`` is high, counter is set to value in ``ui_in``
    - If ``uio_in[0]`` is low, counter increments by 1
        - Counter wraps back to 0 if increment happens at max value (0xFF)
- Tri-state outputs
    - Sets ``uo_out`` to counter value when ``ena`` is high
    - Sets ``uo_out`` to high-Z when ``ena`` is low


## How to test

Run the Makefile in the ``test`` dir

## External hardware

N/A