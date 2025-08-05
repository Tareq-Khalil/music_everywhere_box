---
title: "Music Everywhere Box"
author: "Mina Romany Mina habib"
description: "A portable, customizable, smart music box with clear audio output and user-controlled track selection."
created_at: "25/6/2026"
---

**Total Time Spent: 78 hours**

---

## Daily Logs

**Day 1 - 25/06/2025**  
*Time Spent:* 5 hours  
I began the journey by imagining how to modernize the idea of a classic music box. I wanted something digital, portable, and intuitive — a kind of “smart music companion.” After considering several microcontroller options, I decided to go with the Teensy 4.1 because of its processing power and audio capabilities. It gave me the flexibility I needed for real-time audio handling. I also sketched some early enclosure ideas — nothing too detailed yet, just trying to envision how the internal components would fit together in a compact and user-friendly form.

---

**Day 2 - 26/06/2025**  
*Time Spent:* 4 hours  
My focus today shifted to choosing the audio playback module. After comparing several options, I landed on the DFPlayer Mini due to its compact size and built-in support for microSD audio playback. I began simulating the wiring for this module, checking its voltage requirements and pin layout. As I worked through the electrical side of things, I also began compiling technical specs for other components I might need, laying the groundwork for later integration.

---

**Day 3 - 27/06/2025**  
*Time Spent:* 6 hours  
Today I started thinking seriously about the physical form of the box. I designed a basic enclosure with enough airflow for the amplifier, leaving space for the battery and other internal modules. I also ran some current and voltage demand simulations to estimate how the system would behave under normal and peak loads. It was important to ensure the battery wouldn't be overstrained — reliability matters more than fancy features when it comes to a portable device.

---

**Day 4 - 28/06/2025**  
*Time Spent:* 5 hours  
I began testing audio playback using the DFPlayer Mini. With a temporary breadboard setup, I tried different speakers and eventually settled on a 3-inch full-range driver that gave surprisingly clean output. I also began testing the integration of a rotary encoder and an OLED screen, which would allow for an interactive user interface. Today felt like the moment the project started turning into something real.

---

**Day 5 - 29/06/2025**  
*Time Spent:* 7 hours  
Most of the day was spent refining the wiring layout. I finished simulating all major connections, and then reworked the control panel layout to recess the buttons and encoder for a sleeker look. I researched lithium-ion battery safety modules and finalized a charging solution that wouldn’t interfere with the user experience. Every component now had a place — physically and electrically — and that was a big step forward.

---

**Day 6 - 30/06/2025**  
*Time Spent:* 6 hours  
Today was all about safety and precision. I calculated jumper wire thickness and verified it could handle the current draw. I finalized the 3D model, carefully adjusting tolerances to make sure the components would fit just right. I even ran a virtual airflow simulation to ensure the internals wouldn’t trap heat — a detail often skipped, but one I knew would make a difference over long-term use.

---

**Day 7 - 1/07/2025**  
*Time Spent:* 6 hours  
I spent the day documenting material properties, focusing especially on PLA’s thermal limits and how that related to the amplifier’s heat output. I verified OLED readability with multiple backgrounds to avoid poor visibility in daylight. I also experimented with tactile button placement, trying to reduce the chance of accidental presses. Small changes, but the kind that make a difference in daily use.

---

**Day 8 - 02/07/2025**  
*Time Spent:* 6 hours  
This session was all about audio quality. I ran several sound tests using the PAM8403 amplifier module, adjusting distances between it and the speaker. To add more depth, I experimented with a small subwoofer amplifier. It made a noticeable improvement. I also reorganized the battery layout to maximize space efficiency without affecting airflow.

---

**Day 9 - 03/07/2025**  
*Time Spent:* 5 hours  
I wired and tested all the electronic components on a breadboard. The MP3 module, OLED display, and encoder were all functional, but the encoder had a noisy signal which I had to debounce in code. It was tedious work, but I made sure to document the wiring in detail to make future soldering easier and error-free.

---

**Day 10 - 04/07/2025**  
*Time Spent:* 6 hours  
Today, I simulated full system battery load and tested how long the box could operate during continuous playback. The results were promising. I also tested USB charging while the device was running and encountered no issues. I took this opportunity to polish the UI — making the OLED display show song titles and volume levels with clean transitions. It started to feel like a consumer-ready product.

---

**Day 11 - 05/07/2025**  
*Time Spent:* 6 hours  
I printed the enclosure using my finalized 3D model and began mounting the components inside. The button and port alignment was nearly perfect. I added ventilation grids for heat dispersion, then secured the internal parts. I also wrote a clear guide on how to assemble everything — including screw sizes, fitting tips, and wiring precautions.

---

**Day 12 - 06/07/2025**  
*Time Spent:* 5 hours  
It was time for full testing. I played several MP3 tracks, checked volume adjustment, and confirmed that the OLED gave proper feedback with every interaction. I made sure the enclosure shut tightly with no wire compression. Everything felt smooth. I took final photos of the device from multiple angles to document this phase.

---

**Day 13 - 07/07/2025**  
*Time Spent:* 4 hours  
I spent today wrapping up all assembly documentation, focusing on simplifying each step for reproducibility. I also did a deep dive into MP3 decoding strategies and power preservation techniques, simulating long usage sessions and refining the battery indicator logic to be more precise.

---

**Day 14 - 08/07/2025**  
*Time Spent:* 4 hours  
This session was focused on refining the written documentation. I added wiring callouts for potential troubleshooting and clearly labeled every section of the design. I calculated the final cost of the entire build and was pleased to see I had stayed well within budget. I also reviewed safety and usability under different scenarios — including heat, overcharge, and button misuse.

---

**Day 15 - 09/07/2025**  
*Time Spent:* 3 hours  
For the final touch, I cross-checked the entire Bill of Materials to confirm accuracy and consistency with the source files. I polished the README to follow formatting standards, then uploaded all final CAD files, wiring diagrams, and project photos to the documentation gallery. With that, the *Music Everywhere Box* was officially complete and ready to share with the world.

---



## Images
- ![alt text](PIC/image1.png) 
- ![alt text](PIC/image2.png) 
- ![alt text](PIC/image.png)
- ![alt text](PIC/music_everywhere_box_wiring_diagram.png)



