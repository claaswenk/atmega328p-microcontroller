# atmega328p-microcontroller
This repository contains code projects regarding ATMEGA328P programming with C.

<details>
    <summary>1. Blinking LED</summary>

### Description:
The `blinky.c` file implements a simple blinking LED example on an
ATMEGA328P microcontroller.
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
    <summary>2. Traffic Light</summary>

### Description:
The `traffic_light.c` file demonstrates a simple traffic light sequence using digital pins connected to portC.
- It alternates between "red", "red-yellow", "green" and "yellow" states for the traffic lights with each state lasting 5 seconds.

![alt text](/img/traffic_light.gif)

![alt text](/img/traffic_light.jpg)

### Key Features:
- Four States: "red", "red-yellow", green and "yellow" in sequence.
- Each State Duration: 5 seconds per state.

### See the code:
- [traffic_light.c](/code/traffic_light.c)

</details>

---

<details>
    <summary>3. Traffic Light with Switch</summary>

### Description:
The `traffic_light_switch.c` file extends the traffic light functionality by adding an interrupt-driven switch mechanism to control which state of the traffic lights is active.
- It uses two buttons, one connected to PORTD pin 2 and another to PORTD pin 3 for interrupting the "red", "red-yellow", green and "yellow" sequence.

![alt text](/img/traffic_light_switch.jpg)

### Key Features:
- Button-controlled Traffic Lights: The state of the traffic lights can be manually switched by pressing a specific button.

### See the code: 
- [traffic_light_switch.c](/code/traffic_light_switch.c)

</details>

--- 

<details>
    <summary>4. Falling Edge LED Switch</summary>

### Description:
The `falling_edge_led_switch.c` file implements a switch that uses a falling edge to turn a led on and off. 

### Key Features:
- Control the state of a led using two buttons, that use interrupts to change the led's state.

### See the code:
- [falling_edge_led_switch.c](/code/falling_edge_led_switch.c)

</details>

---

<details>
    <summary>5. Any Logic LED Switch</summary>

### Description:
The `any_logic_led_switch.c` file implements a switch that uses the any logic configuration to turn a led on and off. 

### Key Features:
- Control the state of a led using two buttons, that use interrupts to change the led's state.

### See the code:
- [any_logic_led_switch.c](/code/any_logic_led_switch.c)

</details>

---

<details>
    <summary>6. 440 Hz Buzzer</summary>

### Description:
The `buzzer_440hz.c` file implements a 440 Hz sound that is being played by a buzzer.

### Key Features:
- Let a buzzer play a sound.

### See the code:
- [buzzer_440hz.c](/code/buzzer_440hz.c)

</details>

---

<details>
    <summary>7. 440 Hz Buzzer with Switch</summary>

### Description:
The `buzzer_440hz_switch.c` file implements a button controlled sound being played by a buzzer varying from 440 Hz to ~260 Hz.

![alt text](/img/buzzer.jpg)

https://github.com/user-attachments/assets/5ca8d89c-1579-4974-bb5e-15156acf0edf.mp4



### Key Features:
- Let a buzzer play a different sound by pressing a button.

### See the code:
- [buzzer_440hz_switch.c](/code/buzzer_440hz_switch.c)

</details>

---

<details>
    <summary>8. PWM LED</summary>

### Description:
The `pwm_led.c` file implements two pwm controlled led's that light up in a different brightness.

![alt text](/img/pwm_led.jpg)

### Key Features:
- Look at two pwm controlled led's.

### See the code:
- [pwm_led.c](/code/pwm_led.c)

</details>

---

<details>
    <summary>9. PWM LED with Fade Effect</summary>

### Description:
The `pwm_led_fade.c` file implements pwm controlled led's that change their brightness in a fade effect.

![alt text](/img/pwm_led_fade.gif)

### Key Features:
- Look at pwm controlled led's.

### See the code:
- [pwm_led_fade.c](/code/pwm_led_fade.c)

</details>
