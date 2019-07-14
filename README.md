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

#### Setup Instructions 1:

- Add ```[] call Harris_clientInit``` to init.sqf or ```initPlayerLocal.sqf```
- ```fn_serverInit.sqf``` is called Automatically.\

#### Setup Instructions 2 (Mission Version):
- Follow the same steps as 'Setup Instructions 1'
- Add the Content of ```description.ext``` to the ```description.ext``` of your mission. Note: Your mission may already contain the code block ```class rscTitles {}``` or have a ```rscTitles.hpp``` included somewhere, if so, just add the multiple ```class NZF_Notifications``` configs to this place, as well as the ```include 'NZF_defines.hpp```
- In File ```fn_Notifications.sqf``` repoint all of the .paa directories to the mission in the 'Notifications' folder, and do the same in the config for the dialogs that you are putting in your description.ext

Note: I can do all of this for you a bit later but I may be having to go out soon, so can't guarantee I can do it before I levae.

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
