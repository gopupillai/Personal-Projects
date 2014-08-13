Intercept-Shield

Creation of particle interception algorithm.
Just to practice / revise C++ libraries and classes.
Practicing inheritance through using patriot as an inherited class of rocket
	- Setting rocket private data to protected to help with inheritance
Note:
	- Input of patriot IDs must start at '0' and proceed in consecutively increasing IDs
	- Makes it easier to input as an ID for vector

Upgrades:
	1) UNIX Time for input / output -> Provide precise time for launch
	2) Incorporate vector for rockets -> Implement real time input for rockets
	3) Set up downtime for patriot using UNIX time
	4) Include linking between a patriot missile and rocket -> Tracking via coordinates
		- Include possibility for erratic movement of rocket
	5) Include patriot batteries within safe zone area and not outside
		- Will ensure program does not permit any batteries to be attacked by a rocket