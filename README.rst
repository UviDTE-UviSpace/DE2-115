=======================
DE2-115 hardware design
=======================

:Author:
    Department of Electronic Technology,

    University of Vigo


The project contains two main packages:

* DE2_115-flash_sopcbuilder_11_original

* DE2_115_sopcbuilder_12

---------------
Project summary
---------------

The project contains the hardware design for a DE2-115 board for controlling an external camera and communicating 
through the ethernet port to a main controller. There is a Nios II microprocessor embedded inside the FPGA, whose main functionality is to create a TCP/IP server that will answer to the main controller requests.

-------------
Compatibility
-------------

The designed hardware and Nios II software is compatible with the **UviSpace** main controller software version 1.0.0

--------------
Important note
--------------

This project is deprecated and not stable. It was the basis for designing the **UviSpace** DE1-SoC hardware, and is kept for historical reasons. However, there are some issues regargind the hardware design, and it cannot be compiled directly to the board. 
