# Notification System

Install Instructions:
- Pack ```Harris_Client``` into a PBO file with PboProject (PBOManager works but ```Verify Signatures``` does not work with PBOManager-packed PBOs) (I can do this for you and upload if you want)
- Pack ```Harris_Server``` into a PBO file with any PBO Tool (PBOManager or PBOProject)
- Load the Client PBO on the Client mods and the Server Pbo on the Server Mods 

#### Important Note:
- This ```Harris_Client.pbo``` contains ALL of my GUI, UI and models that are needed for my other projects. (E.g. PoliceDB, Phone, Custom Items). You can go into this and delete this files if you do not want them.
    - Futhermore, if you want the notification system to run solely in a mission this is possible too by moving the Notification GUI Configuration and files into the mission. I can do this for you if you want

I would recommend deleting the things you do not want, I can do it for you if you need, but it just may save you some space in your modpack.

Although there may be some custom physical items in there that you may want to use.

#### Setup Instructions:

- Add ```[] call Harris_clientInit``` to init.sqf or ```initPlayerLocal.sqf```
- ```fn_serverInit.sqf``` is called Automatically.

#### Use Instructions:

- ```["Title", "Text", "Type"] call NZF_Notifications;```
- Title Appears at the top
- Text is the main body text
- Type is the icon/colour that will appear: there are currently five types:
    - Info (Blue with an 'i')
	- General (Grey with a bell)
	- Success (Green with a tick)
	- Failure (Red with an X)
	- Warning (Amber(ish) with a warning symbol)
