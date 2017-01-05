// ACE_SYS_SA_RFL (Contains all current sight settings)

#define ACE_SYS_SA_RFL_NEW [false, objNull, "", "", 0, 0, 0, 0, 0, 0,[]]

#define ACE_SYS_SA_RFL_INDEX_ENABLED                    	0
#define ACE_SYS_SA_RFL_INDEX_CURUNIT                    	1
#define ACE_SYS_SA_RFL_INDEX_CURWEAPON                  	2
#define ACE_SYS_SA_RFL_INDEX_CURMUZZLE                 	3
#define ACE_SYS_SA_RFL_INDEX_CURELEVATION               	4
#define ACE_SYS_SA_RFL_INDEX_CURWINDAGE                 	5
#define ACE_SYS_SA_RFL_INDEX_CURELEVATION_DEG               	6
#define ACE_SYS_SA_RFL_INDEX_CURWINDAGE_DEG                 	7
#define ACE_SYS_SA_RFL_INDEX_FIREDEH                  		8
#define ACE_SYS_SA_RFL_INDEX_CURRANGE                    	9
#define ACE_SYS_SA_RFL_INDEX_CURTURRET                    	10

#define ACE_SYS_SA_RFL_ENABLED                          	(ACE_SYS_SA_RFL select ACE_SYS_SA_RFL_INDEX_ENABLED)
#define ACE_SYS_SA_RFL_CURUNIT                          	(ACE_SYS_SA_RFL select ACE_SYS_SA_RFL_INDEX_CURUNIT)
#define ACE_SYS_SA_RFL_CURWEAPON                        	(ACE_SYS_SA_RFL select ACE_SYS_SA_RFL_INDEX_CURWEAPON)
#define ACE_SYS_SA_RFL_CURMUZZLE                        	(ACE_SYS_SA_RFL select ACE_SYS_SA_RFL_INDEX_CURMUZZLE)
#define ACE_SYS_SA_RFL_CURELEVATION                     	(ACE_SYS_SA_RFL select ACE_SYS_SA_RFL_INDEX_CURELEVATION)
#define ACE_SYS_SA_RFL_CURWINDAGE                       	(ACE_SYS_SA_RFL select ACE_SYS_SA_RFL_INDEX_CURWINDAGE)
#define ACE_SYS_SA_RFL_CURELEVATION_DEG                     	(ACE_SYS_SA_RFL select ACE_SYS_SA_RFL_INDEX_CURELEVATION_DEG)
#define ACE_SYS_SA_RFL_CURWINDAGE_DEG                       	(ACE_SYS_SA_RFL select ACE_SYS_SA_RFL_INDEX_CURWINDAGE_DEG)
#define ACE_SYS_SA_RFL_FIREDEH                          	(ACE_SYS_SA_RFL select ACE_SYS_SA_RFL_INDEX_FIREDEH)
#define ACE_SYS_SA_RFL_CURRANGE                          	(ACE_SYS_SA_RFL select ACE_SYS_SA_RFL_INDEX_CURRANGE)
#define ACE_SYS_SA_RFL_CURTURRET                          	(ACE_SYS_SA_RFL select ACE_SYS_SA_RFL_INDEX_CURTURRET)



#define ACE_SYS_SA_RFL_SET_ENABLED(value)               	ACE_SYS_SA_RFL set [ACE_SYS_SA_RFL_INDEX_ENABLED, ##value]
#define ACE_SYS_SA_RFL_SET_CURUNIT(value)              	ACE_SYS_SA_RFL set [ACE_SYS_SA_RFL_INDEX_CURUNIT, ##value]
#define ACE_SYS_SA_RFL_SET_CURWEAPON(value)             	ACE_SYS_SA_RFL set [ACE_SYS_SA_RFL_INDEX_CURWEAPON, ##value]
#define ACE_SYS_SA_RFL_SET_CURMUZZLE(value)            	ACE_SYS_SA_RFL set [ACE_SYS_SA_RFL_INDEX_CURMUZZLE, ##value]
#define ACE_SYS_SA_RFL_SET_CURELEVATION(value)          	ACE_SYS_SA_RFL set [ACE_SYS_SA_RFL_INDEX_CURELEVATION, ##value]
#define ACE_SYS_SA_RFL_SET_CURWINDAGE(value)            	ACE_SYS_SA_RFL set [ACE_SYS_SA_RFL_INDEX_CURWINDAGE, ##value]
#define ACE_SYS_SA_RFL_SET_CURELEVATION_DEG(value)          	ACE_SYS_SA_RFL set [ACE_SYS_SA_RFL_INDEX_CURELEVATION_DEG, ##value]
#define ACE_SYS_SA_RFL_SET_CURWINDAGE_DEG(value)            	ACE_SYS_SA_RFL set [ACE_SYS_SA_RFL_INDEX_CURWINDAGE_DEG, ##value]
#define ACE_SYS_SA_RFL_SET_FIREDEH(value)              	ACE_SYS_SA_RFL set [ACE_SYS_SA_RFL_INDEX_FIREDEH, ##value]
#define ACE_SYS_SA_RFL_SET_CURRANGE(value)              	ACE_SYS_SA_RFL set [ACE_SYS_SA_RFL_INDEX_CURRANGE, ##value]
#define ACE_SYS_SA_RFL_SET_CURTURRET(value)              	ACE_SYS_SA_RFL set [ACE_SYS_SA_RFL_INDEX_CURTURRET, ##value]





// ACE_SYS_SA_RFL_WCFG (Contains weapon sight properties)

#define ACE_SYS_SA_RFL_WCFG_NEW ["", "", "", "", 0, 0, 0, 0, 0, 0, 0, [], "", "",0,0,0]

#define ACE_SYS_SA_RFL_WCFG_INDEX_WEAPON                   	0
#define ACE_SYS_SA_RFL_WCFG_INDEX_MUZZLE                    	1
#define ACE_SYS_SA_RFL_WCFG_INDEX_ELEVATION_UNITS               	2
#define ACE_SYS_SA_RFL_WCFG_INDEX_WINDAGE_UNITS             	3
#define ACE_SYS_SA_RFL_WCFG_INDEX_DEFAULTELEVATION        		4
#define ACE_SYS_SA_RFL_WCFG_INDEX_DEFAULTWINDAGE        		5
#define ACE_SYS_SA_RFL_WCFG_INDEX_MINELEVATION				6
#define ACE_SYS_SA_RFL_WCFG_INDEX_MAXELEVATION          		7
#define ACE_SYS_SA_RFL_WCFG_INDEX_MAXWINDAGE            		8
#define ACE_SYS_SA_RFL_WCFG_INDEX_ADJELEVATION              	9
#define ACE_SYS_SA_RFL_WCFG_INDEX_ADJWINDAGE                	10
#define ACE_SYS_SA_RFL_WCFG_INDEX_TABLE                      	11
#define ACE_SYS_SA_RFL_WCFG_INDEX_ADJMODE                      12
#define ACE_SYS_SA_RFL_WCFG_INDEX_RANGE_UNITS                      13
#define ACE_SYS_SA_RFL_WCFG_INDEX_MINRANGE				14
#define ACE_SYS_SA_RFL_WCFG_INDEX_MAXRANGE          		15
#define ACE_SYS_SA_RFL_WCFG_INDEX_ZERO          		16


#define ACE_SYS_SA_RFL_WCFG_WEAPON               		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_WEAPON)
#define ACE_SYS_SA_RFL_WCFG_MUZZLE               		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_MUZZLE)
#define ACE_SYS_SA_RFL_WCFG_ELEVATION_UNITS            	(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_ELEVATION_UNITS)
#define ACE_SYS_SA_RFL_WCFG_WINDAGE_UNITS              	(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_WINDAGE_UNITS)
#define ACE_SYS_SA_RFL_WCFG_DEFAULTELEVATION       	(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_DEFAULTELEVATION)
#define ACE_SYS_SA_RFL_WCFG_DEFAULTWINDAGE       	(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_DEFAULTWINDAGE)
#define ACE_SYS_SA_RFL_WCFG_MINELEVATION       		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_MINELEVATION)
#define ACE_SYS_SA_RFL_WCFG_MAXELEVATION       		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_MAXELEVATION)
#define ACE_SYS_SA_RFL_WCFG_MAXWINDAGE         		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_MAXWINDAGE)
#define ACE_SYS_SA_RFL_WCFG_ADJELEVATION         		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_ADJELEVATION)
#define ACE_SYS_SA_RFL_WCFG_ADJWINDAGE           		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_ADJWINDAGE)
#define ACE_SYS_SA_RFL_WCFG_TABLE                 		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_TABLE)
#define ACE_SYS_SA_RFL_WCFG_ADJMODE                 		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_ADJMODE)
#define ACE_SYS_SA_RFL_WCFG_RANGE_UNITS                 		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_RANGE_UNITS)
#define ACE_SYS_SA_RFL_WCFG_MINRANGE       		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_MINRANGE)
#define ACE_SYS_SA_RFL_WCFG_MAXRANGE       		(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_MAXRANGE)
#define ACE_SYS_SA_RFL_WCFG_ZERO       			(ACE_SYS_SA_RFL_WCFG select ACE_SYS_SA_RFL_WCFG_INDEX_ZERO)


#define ACE_SYS_SA_RFL_WCFG_SET_WEAPON(value)          		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_WEAPON, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_MUZZLE(value)          		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_MUZZLE, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_ELEVATION_UNITS(value)       	ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_ELEVATION_UNITS, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_WINDAGE_UNITS(value)		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_WINDAGE_UNITS, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_DEFAULTELEVATION(value)  	ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_DEFAULTELEVATION, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_DEFAULTWINDAGE(value)  	ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_DEFAULTWINDAGE, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_MINELEVATION(value)  		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_MINELEVATION, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_MAXELEVATION(value)  		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_MAXELEVATION, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_MAXWINDAGE(value)    		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_MAXWINDAGE, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_ADJELEVATION(value)    		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_ADJELEVATION, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_ADJWINDAGE(value)      		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_ADJWINDAGE, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_TABLE(value)            		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_TABLE, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_ADJMODE(value)            	ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_ADJMODE, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_RANGE_UNITS(value)            	ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_RANGE_UNITS, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_MINRANGE(value)  		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_MINRANGE, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_MAXRANGE(value)  		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_MAXRANGE, ##value]
#define ACE_SYS_SA_RFL_WCFG_SET_ZERO(value)  		ACE_SYS_SA_RFL_WCFG set [ACE_SYS_SA_RFL_WCFG_INDEX_ZERO, ##value]
