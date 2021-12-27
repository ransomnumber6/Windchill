# Windchill
Windchill Calculation in C

Wind moving over bare skin during cold weather increases the heat loss from the body. We call it wind chill or the wind
chill factor. Wind chill is a complex function of several factors, the most important being air temperature and wind
speed. With low temperatures and strong winds, sometimes the body cannot keep up with the heat loss and the
temperature of the skin decreases. This can lead to the freezing of exposed skin surfaces. Normally though, the wind plus
the cold temperatures just leads to discomfort.
Usually charts are given to help people figure out the wind chill for different wind speeds.

The formula used to calculate windchill in this program is as follows:
T_wc = 13.12 + 0.6215T - 11.37V^(0.16) + 0.3965TV^(0.16)

Where T is the temperature in Fahrenheight and V is the wind speed in miles per hour.

You will be prompted to enter your name, air temp and unit as well as wind speed. 

Based on the users input the cacluations will be evaluated and will fall into three categories based on a range of temps.

Each range has a different string that will be returned lettign the user know how severe the windchill is.

