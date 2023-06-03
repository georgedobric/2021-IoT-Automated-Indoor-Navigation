/*****************************************************************************************************
* The automated indoor navigation was designed to operate within an area with four destination       *           
* zones, six tables, and an isle of longitudinal transportation.                                     *
*                                                                                                    *
* The following code was developed to simulate automated indoor navigation. The purpose of           *
* this development was to prepare the navigation code so that once the RSSI signal collection        *
* from four of the ESP32 Bluetooth beacons was complete and ready, the signal collection could       *
* be easily fitted into this code which would result in time saved for the team. The code has four   *
* blocks, each of which is dedicated to each zone, allowing for longitudinal, lateral, and diagonal  * 
* transportation. The simulation code uses a mapping of a ten-by-ten system, with zone A being       *
* referred to by the coordinates (2,2), zone B by (8, 2), zone C by (2, 8), and zone D by (8,8). The *
* variables assigned form lines 6 to 13 of the code were not used, however this is where the RSSI    *
* signal collection would be assigned. The collected signals could be mapped out to determine x      *
* and y values for an obtained signal, this would require several measurements to be done and        *
* recorded in order to determine the x and y correlation with a single signal.                       *
*****************************************************************************************************/


/*  A       B



    C       D*/
msg.aX = 0;
msg.aY = 0;
msg.bX = 10;
msg.bY = 0;
msg.cX = 0;
msg.cY = 10;
msg.dX = 10;
msg.dY = 10;
if (msg.startAtoB == null)
    msg.startAtoB == true;
if (msg.startAtoC == null)
    msg.startAtoC == true;
if (msg.startAtoD == null)
    msg.startAtoD == true;
if (msg.startBtoA == null)
    msg.startBtoA == true;
if (msg.startBtoC == null)
    msg.startBtoC == true;
if (msg.startBtoD == null)
    msg.startBtoD == true;
if (msg.startCtoA == null)
    msg.startCtoA == true;
if (msg.startCtoB == null)
    msg.startCtoB == true;
if (msg.startCtoD == null)
    msg.startCtoD == true;
if (msg.startDtoA == null)
    msg.startDtoA == true;
if (msg.startDtoB == null)
    msg.startDtoB == true;
if (msg.startDtoC == null)
    msg.startDtoC == true;

if (msg.raspX == null && msg.raspY == null){
    msg.raspX == 2;
    msg.raspY == 2;
}

// Destination Zone D
if (msg.zoneD == true){
    
    // Diagonal transportation section begins
    // zone A to D transportation begins
    if (msg.destA == true){
        if (msg.startAtoD == true)
            msg.AtoD = 1;
        do { 
            msg.raspX += 1; //this is where motor will be actuated
            
        } while (msg.raspX < 5 && msg.AtoD == 1)
        if (msg.raspX == 5 && msg.raspY == 2)
            msg.AtoD = 2;
        do {
            //this is where there will be  one-time car rotation
            msg.raspY += 1; //this is where the motor will be actuted
        } while (msg.raspY < 8 && msg.AtoD == 2)
        if (msg.raspY == 8 && msg.raspX == 5)
            msg.AtoD = 3;
        do { 
            //this is where there will be  one-time car rotation
            msg.raspX += 1; //this is where motor will be actuated
            
        } while (msg.raspX < 8 && msg.AtoD == 3)    
        if (msg.raspX == 8 && msg.raspY == 8)
            msg.AtoD = 4;        
        if (msg.AtoD == 4){
            //initiate 180 degree stationary rotation
        }            
    }
    // zone A to D transportation ends
    // Diagonal transportation section ends
    
    
    // Longitudinal transportation section begins
    // Zone B to D transportation begins
    if (msg.destB == true){
        if (msg.startBtoD == true)
            msg.BtoD = 1;
        do { 
            msg.raspX -= 1; //this is where motor will be actuated
            
        } while (msg.raspX > 5 && msg.BtoD == 1)
        if (msg.raspX == 5 && msg.raspY == 2)
            msg.BtoD = 2;
        do {
            //this is where there will be  one-time car rotation
            msg.raspY += 1; //this is where the motor will be actuted
        } while (msg.raspY < 8 && msg.BtoD == 2)
        if (msg.raspY == 8 && msg.raspX == 5)
            msg.BtoD = 3;
        do { 
            //this is where there will be  one-time car rotation
            msg.raspX += 1; //this is where motor will be actuated
            
        } while (msg.raspX < 8 && msg.BtoD == 3)     
        if (msg.raspX == 8 && msg.raspY == 8)
            msg.BtoD = 4;        
        if (msg.BtoD == 4){
            //initiate 180 degree stationary rotation
        }        
    }
    // zone B to D transportation ends
    // Longitudinal transportation section ends    
    
    // Lateral transportation section begins
    // Zone C to D transportation begins
    if (msg.destC == true){
        if (msg.startCtoD == true)
            msg.CtoD = 1;
        do { 
            msg.raspX += 1; //this is where motor will be actuated
            
        } while (msg.raspX < 8 && msg.CtoD == 1)
        if (msg.raspX == 8 && msg.raspY == 8)
            msg.CtoD = 2;
        if (msg.CtoD == 2){
            //initiate 180 degree stationary rotation
        }
    }
    // zone C to D transportation ends
    // Lateral transportation section ends       
    
}

// Destination Zone C
if (msg.zoneC == true){
    
    // Diagonal transportation section begins
    // zone B to C transportation begins
    if (msg.destB == true){
        if (msg.startBtoC == true)
            msg.BtoC = 1;
        do { 
            msg.raspX -= 1; //this is where motor will be actuated
            
        } while (msg.raspX > 5 && msg.BtoC == 1)
        if (msg.raspX == 5 && msg.raspY == 2)
            msg.BtoC = 2;
        do {
            //this is where there will be  one-time car rotation
            msg.raspY += 1; //this is where the motor will be actuted
        } while (msg.raspY < 8 && msg.BtoC == 2)
        if (msg.raspY == 8 && msg.raspX == 5)
            msg.BtoC = 3;
        do { 
            //this is where there will be  one-time car rotation
            msg.raspX -= 1; //this is where motor will be actuated
            
        } while (msg.raspX > 2 && msg.BtoC == 3)    
        if (msg.raspX == 2 && msg.raspY == 8)
            msg.BtoC = 4;        
        if (msg.BtoC == 4){
            //initiate 180 degree stationary rotation
        }            
    }
    // zone B to C transportation ends
    // Diagonal transportation section ends
    
    
    // Longitudinal transportation section begins
    // Zone A to C transportation begins
    if (msg.destA == true){
        if (msg.startAtoC == true)
            msg.AtoC = 1;
        do { 
            msg.raspX += 1; //this is where motor will be actuated
            
        } while (msg.raspX < 5 && msg.AtoC == 1)
        if (msg.raspX == 5 && msg.raspY == 2)
            msg.AtoC = 2;
        do {
            //this is where there will be  one-time car rotation
            msg.raspY += 1; //this is where the motor will be actuted
        } while (msg.raspY < 8 && msg.AtoC == 2)
        if (msg.raspY == 8 && msg.raspX == 5)
            msg.AtoC = 3;
        do { 
            //this is where there will be  one-time car rotation
            msg.raspX -= 1; //this is where motor will be actuated
            
        } while (msg.raspX > 2 && msg.AtoC == 3)     
        if (msg.raspX == 2 && msg.raspY == 8)
            msg.AtoC = 4;        
        if (msg.AtoC == 4){
            //initiate 180 degree stationary rotation
        }        
    }
    // zone A to C transportation ends
    // Longitudinal transportation section ends    
    
    // Lateral transportation section begins
    // Zone D to C transportation begins
    if (msg.destD == true){
        if (msg.startDtoC == true)
            msg.DtoC = 1;
        do { 
            msg.raspX -= 1; //this is where motor will be actuated
            
        } while (msg.raspX > 2 && msg.DtoC == 1)
        if (msg.raspX == 2 && msg.raspY == 8)
            msg.DtoC = 2;
        if (msg.DtoC == 2){
            //initiate 180 degree stationary rotation
        }
    }
    // zone D to C transportation ends
    // Lateral transportation section ends       
    
}

// Destination Zone B
if (msg.zoneB == true){
    
    // Diagonal transportation section begins
    // zone C to B transportation begins
    if (msg.destC == true){
        if (msg.startCtoB == true)
            msg.CtoB = 1;
        do { 
            msg.raspX += 1; //this is where motor will be actuated
            
        } while (msg.raspX < 5 && msg.CtoB == 1)
        if (msg.raspX == 5 && msg.raspY == 8)
            msg.CtoB = 2;
        do {
            //this is where there will be  one-time car rotation
            msg.raspY -= 1; //this is where the motor will be actuted
        } while (msg.raspY > 2 && msg.CtoB == 2)
        if (msg.raspY == 2 && msg.raspX == 5)
            msg.CtoB = 3;
        do { 
            //this is where there will be  one-time car rotation
            msg.raspX += 1; //this is where motor will be actuated
            
        } while (msg.raspX < 8 && msg.CtoB == 3)    
        if (msg.raspX == 8 && msg.raspY == 2)
            msg.CtoB = 4;        
        if (msg.CtoB == 4){
            //initiate 180 degree stationary rotation
        }            
    }
    // zone C to B transportation ends
    // Diagonal transportation section ends
    
    
    // Longitudinal transportation section begins
    // Zone D to B transportation begins
    if (msg.destD == true){
        if (msg.startDtoB == true)
            msg.DtoB = 1;
        do { 
            msg.raspX -= 1; //this is where motor will be actuated
            
        } while (msg.raspX > 5 && msg.DtoB == 1)
        if (msg.raspX == 5 && msg.raspY == 8)
            msg.DtoB = 2;
        do {
            //this is where there will be  one-time car rotation
            msg.raspY -= 1; //this is where the motor will be actuted
        } while (msg.raspY > 2 && msg.DtoB == 2)
        if (msg.raspY == 2 && msg.raspX == 5)
            msg.DtoB = 3;
        do { 
            //this is where there will be  one-time car rotation
            msg.raspX += 1; //this is where motor will be actuated
            
        } while (msg.raspX < 8 && msg.DtoB == 3)     
        if (msg.raspX == 8 && msg.raspY == 2)
            msg.DtoB = 4;        
        if (msg.DtoB == 4){
            //initiate 180 degree stationary rotation
        }        
    }
    // zone D to B transportation ends
    // Longitudinal transportation section ends    
    
    // Lateral transportation section begins
    // Zone A to B transportation begins
    if (msg.destA == true){
        if (msg.startAtoB == true)
            msg.AtoB = 1;
        do { 
            msg.raspX += 1; //this is where motor will be actuated
            
        } while (msg.raspX < 8 && msg.AtoB == 1)
        if (msg.raspX == 8 && msg.raspY == 2)
            msg.AtoB = 2;
        if (msg.AtoB == 2){
            //initiate 180 degree stationary rotation
        }
    }
    // zone A to B transportation ends
    // Lateral transportation section ends       
    
}

// Destintion Zone A
if (msg.zoneA == true){
    
    // Diagonal transportation section begins
    // zone D to A transportation begins
    if (msg.destD == true){
        if (msg.startDtoA == true)
            msg.DtoA = 1;
        do { 
            msg.raspX -= 1; //this is where motor will be actuated
            
        } while (msg.raspX > 5 && msg.DtoA == 1)
        if (msg.raspX == 5 && msg.raspY == 8)
            msg.DtoA = 2;
        do {
            //this is where there will be  one-time car rotation
            msg.raspY -= 1; //this is where the motor will be actuted
        } while (msg.raspY > 2 && msg.DtoA == 2)
        if (msg.raspY == 2 && msg.raspX == 5)
            msg.DtoA = 3;
        do { 
            //this is where there will be  one-time car rotation
            msg.raspX -= 1; //this is where motor will be actuated
            
        } while (msg.raspX > 2 && msg.DtoA == 3)    
        if (msg.raspX == 2 && msg.raspY == 2)
            msg.DtoA = 4;        
        if (msg.DtoA == 4){
            //initiate 180 degree stationary rotation
        }            
    }
    // zone D to A transportation ends
    // Diagonal transportation section ends
    
    
    // Longitudinal transportation section begins
    // Zone C to A transportation begins
    if (msg.destC == true){
        if (msg.startCtoA == true)
            msg.CtoA = 1;
        do { 
            msg.raspX += 1; //this is where motor will be actuated
            
        } while (msg.raspX < 5 && msg.CtoA == 1)
        if (msg.raspX == 5 && msg.raspY == 8)
            msg.CtoA = 2;
        do {
            //this is where there will be  one-time car rotation
            msg.raspY -= 1; //this is where the motor will be actuted
        } while (msg.raspY > 2 && msg.CtoA == 2)
        if (msg.raspY == 2 && msg.raspX == 5)
            msg.CtoA = 3;
        do { 
            //this is where there will be  one-time car rotation
            msg.raspX -= 1; //this is where motor will be actuated
            
        } while (msg.raspX > 2 && msg.CtoA == 3)     
        if (msg.raspX == 2 && msg.raspY == 2)
            msg.CtoA = 4;        
        if (msg.CtoA == 4){
            //initiate 180 degree stationary rotation
        }        
    }
    // zone C to A transportation ends
    // Longitudinal transportation section ends    
    
    // Lateral transportation section begins
    // Zone B to A transportation begins
    if (msg.destB == true){
        if (msg.startBtoA == true)
            msg.BtoA = 1;
        do { 
            msg.raspX -= 1; //this is where motor will be actuated
            
        } while (msg.raspX > 2 && msg.BtoA == 1)
        if (msg.raspX == 2 && msg.raspY == 2)
            msg.BtoA = 2;
        if (msg.BtoA == 2){
            //initiate 180 degree stationary rotation
        }
    }
    // zone B to A transportation ends
    // Lateral transportation section ends       
    
}
return msg;
