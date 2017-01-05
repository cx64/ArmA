// ACE_SYS_SA (Contains all current sight settings)

#define ACE_SYS_SA_NEW [false, objNull, "", "", 0, 0, 0, 0, 0, false,[]]

#define ACE_SYS_SA_INDEX_ENABLED                    	0
#define ACE_SYS_SA_INDEX_CURUNIT                    	1
#define ACE_SYS_SA_INDEX_CURWEAPON                  	2
#define ACE_SYS_SA_INDEX_CURVEHICLE                 	3
#define ACE_SYS_SA_INDEX_CURELEVATION               	4
#define ACE_SYS_SA_INDEX_CURWINDAGE                 	5
#define ACE_SYS_SA_INDEX_CURELEVATION_DEG               6
#define ACE_SYS_SA_INDEX_CURWINDAGE_DEG                 7
#define ACE_SYS_SA_INDEX_FIREDEH                  	8
#define ACE_SYS_SA_INDEX_TEACTIVE                    	9
#define ACE_SYS_SA_INDEX_CURTURRET                    	10

#define ACE_SYS_SA_ENABLED                          	(ACE_SYS_SA select ACE_SYS_SA_INDEX_ENABLED)
#define ACE_SYS_SA_CURUNIT                          	(ACE_SYS_SA select ACE_SYS_SA_INDEX_CURUNIT)
#define ACE_SYS_SA_CURWEAPON                        	(ACE_SYS_SA select ACE_SYS_SA_INDEX_CURWEAPON)
#define ACE_SYS_SA_CURVEHICLE                        	(ACE_SYS_SA select ACE_SYS_SA_INDEX_CURVEHICLE)
#define ACE_SYS_SA_CURELEVATION                     	(ACE_SYS_SA select ACE_SYS_SA_INDEX_CURELEVATION)
#define ACE_SYS_SA_CURWINDAGE                       	(ACE_SYS_SA select ACE_SYS_SA_INDEX_CURWINDAGE)
#define ACE_SYS_SA_CURELEVATION_DEG                     (ACE_SYS_SA select ACE_SYS_SA_INDEX_CURELEVATION_DEG)
#define ACE_SYS_SA_CURWINDAGE_DEG                       (ACE_SYS_SA select ACE_SYS_SA_INDEX_CURWINDAGE_DEG)
#define ACE_SYS_SA_FIREDEH                          	(ACE_SYS_SA select ACE_SYS_SA_INDEX_FIREDEH)
#define ACE_SYS_SA_TEACTIVE                          	(ACE_SYS_SA select ACE_SYS_SA_INDEX_TEACTIVE)
#define ACE_SYS_SA_CURTURRET                          	(ACE_SYS_SA select ACE_SYS_SA_INDEX_CURTURRET)



#define ACE_SYS_SA_SET_ENABLED(value)               	ACE_SYS_SA set [ACE_SYS_SA_INDEX_ENABLED, ##value]
#define ACE_SYS_SA_SET_CURUNIT(value)              	ACE_SYS_SA set [ACE_SYS_SA_INDEX_CURUNIT, ##value]
#define ACE_SYS_SA_SET_CURWEAPON(value)             	ACE_SYS_SA set [ACE_SYS_SA_INDEX_CURWEAPON, ##value]
#define ACE_SYS_SA_SET_CURVEHICLE(value)            	ACE_SYS_SA set [ACE_SYS_SA_INDEX_CURVEHICLE, ##value]
#define ACE_SYS_SA_SET_CURELEVATION(value)          	ACE_SYS_SA set [ACE_SYS_SA_INDEX_CURELEVATION, ##value]
#define ACE_SYS_SA_SET_CURWINDAGE(value)            	ACE_SYS_SA set [ACE_SYS_SA_INDEX_CURWINDAGE, ##value]
#define ACE_SYS_SA_SET_CURELEVATION_DEG(value)          ACE_SYS_SA set [ACE_SYS_SA_INDEX_CURELEVATION_DEG, ##value]
#define ACE_SYS_SA_SET_CURWINDAGE_DEG(value)            ACE_SYS_SA set [ACE_SYS_SA_INDEX_CURWINDAGE_DEG, ##value]
#define ACE_SYS_SA_SET_FIREDEH(value)              	ACE_SYS_SA set [ACE_SYS_SA_INDEX_FIREDEH, ##value]
#define ACE_SYS_SA_SET_TEACTIVE(value)              	ACE_SYS_SA set [ACE_SYS_SA_INDEX_TEACTIVE, ##value]
#define ACE_SYS_SA_SET_CURTURRET(value)              	ACE_SYS_SA set [ACE_SYS_SA_INDEX_CURTURRET, ##value]





// ACE_SYS_SA_WCFG (Contains weapon sight properties)

#define ACE_SYS_SA_WCFG_NEW ["", "", "", "", 0, 0, 0, 0, 0, 0, 0, [], "", ""]

#define ACE_SYS_SA_WCFG_INDEX_WEAPON                   		0
#define ACE_SYS_SA_WCFG_INDEX_MUZZLE                    	1
#define ACE_SYS_SA_WCFG_INDEX_ELEVATION_UNITS               	2
#define ACE_SYS_SA_WCFG_INDEX_WINDAGE_UNITS             	3
#define ACE_SYS_SA_WCFG_INDEX_DEFAULTELEVATION        		4
#define ACE_SYS_SA_WCFG_INDEX_DEFAULTWINDAGE        		5
#define ACE_SYS_SA_WCFG_INDEX_MINELEVATION			6
#define ACE_SYS_SA_WCFG_INDEX_MAXELEVATION          		7
#define ACE_SYS_SA_WCFG_INDEX_MAXWINDAGE            		8
#define ACE_SYS_SA_WCFG_INDEX_ADJELEVATION              	9
#define ACE_SYS_SA_WCFG_INDEX_ADJWINDAGE                	10
#define ACE_SYS_SA_WCFG_INDEX_TABLE                      	11
#define ACE_SYS_SA_WCFG_INDEX_ADJMODE                      	12
#define ACE_SYS_SA_WCFG_INDEX_RANGE_UNITS                      	13


#define ACE_SYS_SA_WCFG_WEAPON               		(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_WEAPON)
#define ACE_SYS_SA_WCFG_MUZZLE               		(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_MUZZLE)
#define ACE_SYS_SA_WCFG_ELEVATION_UNITS            	(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_ELEVATION_UNITS)
#define ACE_SYS_SA_WCFG_WINDAGE_UNITS              	(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_WINDAGE_UNITS)
#define ACE_SYS_SA_WCFG_DEFAULTELEVATION       		(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_DEFAULTELEVATION)
#define ACE_SYS_SA_WCFG_DEFAULTWINDAGE       		(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_DEFAULTWINDAGE)
#define ACE_SYS_SA_WCFG_MINELEVATION       		(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_MINELEVATION)
#define ACE_SYS_SA_WCFG_MAXELEVATION       		(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_MAXELEVATION)
#define ACE_SYS_SA_WCFG_MAXWINDAGE         		(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_MAXWINDAGE)
#define ACE_SYS_SA_WCFG_ADJELEVATION         		(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_ADJELEVATION)
#define ACE_SYS_SA_WCFG_ADJWINDAGE           		(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_ADJWINDAGE)
#define ACE_SYS_SA_WCFG_TABLE                 		(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_TABLE)
#define ACE_SYS_SA_WCFG_ADJMODE                 	(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_ADJMODE)
#define ACE_SYS_SA_WCFG_RANGE_UNITS                 	(ACE_SYS_SA_WCFG select ACE_SYS_SA_WCFG_INDEX_RANGE_UNITS)


#define ACE_SYS_SA_WCFG_SET_WEAPON(value)          		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_WEAPON, ##value]
#define ACE_SYS_SA_WCFG_SET_MUZZLE(value)          		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_MUZZLE, ##value]
#define ACE_SYS_SA_WCFG_SET_ELEVATION_UNITS(value)       	ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_ELEVATION_UNITS, ##value]
#define ACE_SYS_SA_WCFG_SET_WINDAGE_UNITS(value)		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_WINDAGE_UNITS, ##value]
#define ACE_SYS_SA_WCFG_SET_DEFAULTELEVATION(value)  		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_DEFAULTELEVATION, ##value]
#define ACE_SYS_SA_WCFG_SET_DEFAULTWINDAGE(value)  		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_DEFAULTWINDAGE, ##value]
#define ACE_SYS_SA_WCFG_SET_MINELEVATION(value)  		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_MINELEVATION, ##value]
#define ACE_SYS_SA_WCFG_SET_MAXELEVATION(value)  		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_MAXELEVATION, ##value]
#define ACE_SYS_SA_WCFG_SET_MAXWINDAGE(value)    		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_MAXWINDAGE, ##value]
#define ACE_SYS_SA_WCFG_SET_ADJELEVATION(value)    		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_ADJELEVATION, ##value]
#define ACE_SYS_SA_WCFG_SET_ADJWINDAGE(value)      		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_ADJWINDAGE, ##value]
#define ACE_SYS_SA_WCFG_SET_TABLE(value)            		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_TABLE, ##value]
#define ACE_SYS_SA_WCFG_SET_ADJMODE(value)            		ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_ADJMODE, ##value]
#define ACE_SYS_SA_WCFG_SET_RANGE_UNITS(value)            	ACE_SYS_SA_WCFG set [ACE_SYS_SA_WCFG_INDEX_RANGE_UNITS, ##value]



