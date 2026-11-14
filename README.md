                         Real-Time Sensors Monitoring Station Using Periodic Task Scheduler

Project Overview

This project implements a "Real-Time Sensors Monitoring Station" using the LPC2129 ARM7 microcontroller.
The system monitors multiple analog and digital sensors and processes their data using a periodic task scheduler. 
Timer0 is configured to generate a periodic interrupt, which provides timing information for executing sensor-related tasks at regular intervals.
The sensor readings can be processed and transmitted using UART communication.

Hardware Used

- LPC2129 ARM7 Microcontroller
- Flame Sensor
- PIR Sensor
- Vibration Sensor
- Temperature Sensor
- LDR (Light Dependent Resistor)
- Potentiometer
- UART Interface

Software Used

- Keil µVision
- Embedded C
- LPC2129 Microcontroller Libraries

Periodic Task Scheduling

Timer0 is configured to generate a periodic timing event.

The timer interrupt:
1. Generates a periodic tick.
2. Updates a timing flag or counter.
3. Allows the main program to execute tasks at the required intervals.

The main processing operations are performed outside the Interrupt Service Routine (ISR) to keep the interrupt handler short and efficient.

LPC2129 Features Used

- ARM7TDMI-S Processor
- GPIO
- ADC
- Timer0
- Interrupt Controller (VIC)
- UART0

Applications

- Environmental Monitoring
- Industrial Monitoring
- Safety Systems
- Smart Sensor Stations
- Real-Time Embedded Systems
- IoT-Based Monitoring Systems

Author - Niranjan DN
