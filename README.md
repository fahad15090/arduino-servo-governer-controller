# Control Gesoline engine speed

## what we need!
- Arduino uno or nano
- Servo 9g or other according to power(load)
- Jumper wires 
- Any AC Relay small better
- 10k resistor for protection (optional)

## Let's start
- Idea is increase Generator throttle when little-heavy load turn on that over from mechanical governor in gesoline/diesel engine 
- we need to set our gesoline/diesel at lower throttle for saving Gesoline + Engine + Maintenance 
- When need more throttle for balance load ,here arduino comes
- Attach servo some where on engine near governer arm use some metal spring from servo arm to governer arm and setting according you want
- use relay for get signel from load to arduino 
- In my case Water pump use high power to run 
- i put my genrator to lower throttle for better saving Gesoline + Engine + Maintenance 
- i use single wire and attach to live wire of pump circuit & point to where mine genrator 
- Start genrator & check where is the the live & neutral wire of output for wiring Relay power 
- Attach all things together


## Main idea 

when waterpump start Relay start his work & complete circuit for arduino as button & arduino signle servo to move 90 degree angle or any other you want to set (throttle),when stop stop circuit cut-off & servo again move to 0 degree ,throttle goes to normal(low-Speed) ,like this over cicuit run infinty when ever power Relay

# incomplete !!! wait
