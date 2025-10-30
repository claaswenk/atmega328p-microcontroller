# atmega328p-microcontroller
This repository contains code projects regarding ATMEGA328P programming with C.

<details>
    <summary>1. blinky.c</summary>

### Description:
The `blinky.c` file implements a simple blinking LED example on an
ATMEGA328P microcontroller using the Arduino framework.
- It sets up digital pin 5 (connected to portB) as an output and
alternates its state every second.

### Key Features:
- Blinking LED: The LED connected to digital pin 5 of PORTB blinks at a
frequency of 1 Hz, meaning it turns on for half a second and then off
for the other half.

### See the code: 
- [blinky.c](/code/blinky.c)

</details>

---

<details>
    <summary>2. traffic_light.c</summary>

### Description:
The `traffic_light.c` file demonstrates a simple traffic light sequence using digital pins connected to portC.
- It alternates between red, yellow, green states for the traffic lights with each state lasting 5 seconds.

![alt text](/img/traffic_light.gif)

![alt text](/img/traffic_light.jpg)

### Key Features:
- Four States: "Red", "Yellow", Green in sequence.
- Each State Duration: 5 seconds per state.

### See the code:
- [traffic_light.c](/code/traffic_light.c)

</details>

---

<details>
    <summary>3. traffic_light_switch.c</summary>

### Description:
The `traffic_light_switch.c` file extends the traffic light functionality by adding an interrupt-driven switch mechanism to control which state of the traffic lights is active.
- It uses two buttons, one connected to PORTD pin 2 and another to PORTD pin 3 for triggering different states (red, yellow, green) based on button presses.

![alt text](/img/traffic_light_switch.jpg)

### Key Features:
- Button-controlled Traffic Lights: The state of the traffic lights can be manually switched by pressing a specific button.
- Real-time Response: Immediate response to button press without waiting for the loop cycle.

### See the code: 
- [traffic_light_switch.c](/code/traffic_light_switch.c)

</details>