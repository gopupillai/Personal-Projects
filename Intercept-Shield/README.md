#Intercept-Shield

##Description

The program will provide the ID of a patriot battery to intercept any incoming rockets at the point of entry into a user set safe zone.
If the rocket can not be intercepted in time, a warning is outputted with the coordinates that the rocket will enter the safe zone.
Just a basic project to revise my Calc 3 and Physics concepts, in addition to revising C++ libraries and classes.
Practicing inheritance through using patriot as an inherited class of rocket.

##Input

Currently using cin as input and cin redirection in command line as follows:

./intercept_shield < test-1.txt

Where test-1.txt contains the input in the following format:

<safe-zone 3D coordinates> <Radius>
<Incoming Rocket Location> <Incoming Rocket Directional Vector> <Rocket Speed>
<Number of Patriot Batteries>
<Patriot ID> <Patriot Battery Location>

Note: 	The number of patriot batteries must correspond exactly to the number of patriot battery locations provided.
		The patriot battery IDs must start at 0 and proceed upwards consecutively.

##Upgrades

1. UNIX Time for input / output.
	*Provides precise time for launch.
2. Incorporate vector for rockets.
  * Implements real time input for incoming rocket barrages.
3. Set up downtime for patriot using UNIX time.
  * Ensures better real life simulation.
4. Include linking between a patriot missile and rocket.
  * Ensures tracking via coordinates and includes possibility for erratic movement of rocket.
5. Include patriot batteries within safe zone area and not outside.
  * Will ensure program does not permit any batteries to be attacked by a rocket.
6. If unable to intercept, provide coordinates at which the rocket hits z=0, i.e. ground.
  * In addition to entry into safe zone coordinates.
