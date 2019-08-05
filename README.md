# Smart-Street-LED-System-3rd-Year-Project
Intelligent street lighting refers to public street lighting that adapts to movement by pedestrians, cyclists and cars. Intelligent street lighting, also referred to as adaptive street lighting, dims when no activity is detected, but brightens when movement is detected. This type of lighting is different from traditional, stationary illumination, or dimmable street lighting that dims at pre-determined times. We've made a prototype of it by using an Arduino and its IDE.

<h3>Features</h3>
Street lights can be made intelligent by placing cameras or other sensors on them, which enables them to detect movement (e.g. Sensity's Light Sensory Network, GE's "Currents"). Additional technology enables the street lights to communicate with one another. Different companies have different variations to this technology. When a passer-by is detected by a camera or sensor, it will communicate this to neighboring street lights, which will brighten so that people are always surrounded by a safe circle of light.

<h3>Logic:</h3>
We propose an autonomous light distribution system in which the initial street light is always on when its dark, but with a low intensity. 
When it senses an object, it’ll increase its intensity to full and also light up 2 more street lights in front of it. After the object  has gone by, the light changes back to its initial state, i.e. the first street light will be at a dim brightness and the rest that were on will be turned off.

<h3>Components Used</h3>
1. LDR – Light Dependent Resistors<br>
2. IR – Infrared Sensors<br>
3. LED – Light Emitting Diode<br>
4. Arduino<br>
5. Breadboard and wires<br>
6. LM393 Speed Sensor<br>

<br>
<br>

Reference:<br>
https://www.youtube.com/watch?v=2mwVC08looc
https://www.researchgate.net/publication/262352965_Smart_street_light_system_with_energy_saving_function_based_on_the_sensor_network
