<!---

This file is used to generate your project datasheet. Please fill in the information below and delete any unused
sections.

You can also include images in this folder and reference them in the markdown. Each image must be less than
512 kb in size, and the combined size of all images must be less than 1 MB.
-->

## How it works

This is an 8-bit programmable counter with:
- Asynchronous reset
    - Reset's counter to ``0`` on rising edge of ``rst``
- Synchronous load
    - Counter value updated on rising edge of ``clk``
    - if ``set_val_ena`` is high, counter is set to value in ``val``
    - If ``set_val_ena`` is low, counter increments by 1
        - Counter wraps back to 0 if increment happens at max value (0xFF)
- Tri-state outputs
    - Sets ``display_val`` to counter value when ``out_ena`` is high
    - Sets ``display_val`` to high-Z when ``out_ena`` is low


## How to test

Follow instructions in ``test/README.md``

## External hardware

N/A
