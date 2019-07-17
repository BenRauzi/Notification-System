 class NZF_Notifications1
  {
    name = "NZF_Notifications1";
    idd = 4503;
    movingEnable = true;
    enableSimulation = true;
    duration = 5;
      onLoad = "uiNamespace setVariable ['NZF_Notifications1',_this select 0]";
    class controls
    {
      class Image_1: RscPicture
      {
        idc = 1500;
        text = "Notifications\NotifsRed.paa";
        x = 0.83 * safezoneW + safezoneX;
        y = 0.082 * safezoneH + safezoneY;
        w = 0.17 * safezoneW;
        h = 0.06 * safezoneH;
      };
      class Icon_1: RscPicture
      {
        idc = 1200;
        text = "Notifications\bell.paa";
        x = 0.833333 * safezoneW + safezoneX;
        y = 0.102185 * safezoneH + safezoneY;
        w = 0.015 * safezoneW;
        h = 0.025 * safezoneH;
      };
      class Title_1: Harris_RscText
      {
        idc = 1001;
        text = "Title"; //--- ToDo: Localize;
        font = "Metropolis";
        x = 0.851 * safezoneW + safezoneX;
        y = 0.089 * safezoneH + safezoneY;
        w = 0.2 * safezoneW;
        h = 0.02 * safezoneH;
        sizeEx = 0.035;
      };
      class Text_1: RscStructuredText
      {
        idc = 1002;
        text = "<t size='0.75' align='left' font='PuristaMedium' color='#FFFFFF'>You must have $1000 in your bank in order to make this purchase"; //--- ToDo: Localize;
        font = "Metropolis";
        x = 0.851 * safezoneW + safezoneX;
        y = 0.105 * safezoneH + safezoneY;
        w = 0.15 * safezoneW;
        h = 0.03 * safezoneH;
        sizeEx = 0.033;
      };

    };
  };
  class NZF_Notifications2
  {
    name = "NZF_Notifications2";
    idd = 4504;
    movingEnable = true;
    enableSimulation = true;
    duration = 5;
      onLoad = "uiNamespace setVariable ['NZF_Notifications2',_this select 0]";

    class controls
    {
      class Image_2: RscPicture
      {
        idc = 2500;
        text = "Notifications\NotifsRed.paa";
        x = 0.83 * safezoneW + safezoneX;
        y = 0.148 * safezoneH + safezoneY;
        w = 0.17 * safezoneW;
        h = 0.06 * safezoneH;
      };
      class Icon_2: RscPicture
      {
        idc = 2200;
        text = "Notifications\bell.paa";
        x = 0.833333 * safezoneW + safezoneX;
        y = 0.168185 * safezoneH + safezoneY;
        w = 0.015 * safezoneW;
        h = 0.025 * safezoneH;
      };
      class Title_2: Harris_RscText
      {
        idc = 2001;
        text = "Title"; //--- ToDo: Localize;
        font = "Metropolis";
        x = 0.851 * safezoneW + safezoneX;
        y = 0.155* safezoneH + safezoneY;
        w = 0.2 * safezoneW;
        h = 0.02 * safezoneH;
        sizeEx = 0.035;
      };
      class Text_2: RscStructuredText
      {
        idc = 2002;
        text = "<t size='0.75' align='left' font='PuristaMedium' color='#FFFFFF'>You must have $1000 in your bank in order to make this purchase"; //--- ToDo: Localize;
        font = "Metropolis";
        x = 0.851 * safezoneW + safezoneX;
        y = 0.171 * safezoneH + safezoneY;
        w = 0.15 * safezoneW;
        h = 0.03 * safezoneH;
        sizeEx = 0.033;
      };
    };
  };

  class NZF_Notifications3
  {
    name = "NZF_Notifications3";
    idd = 4505;
    movingEnable = true;
    enableSimulation = true;
    duration = 5;
      onLoad = "uiNamespace setVariable ['NZF_Notifications3',_this select 0]";

    class controls
    {
      class Image_3: RscPicture
      {
        idc = 3500;
        text = "Notifications\NotifsRed.paa";
        x = 0.83 * safezoneW + safezoneX;
        y = 0.214 * safezoneH + safezoneY;
        w = 0.17 * safezoneW;
        h = 0.06 * safezoneH;
      };
      class Icon_3: RscPicture
      {
        idc = 3200;
        text = "Notifications\bell.paa";
        x = 0.833333 * safezoneW + safezoneX;
        y = 0.234185 * safezoneH + safezoneY;
        w = 0.015 * safezoneW;
        h = 0.025 * safezoneH;
      };
      class Title_3: Harris_RscText
      {
        idc = 3001;
        text = "Title"; //--- ToDo: Localize;
        font = "Metropolis";
        x = 0.851 * safezoneW + safezoneX;
        y = 0.221 * safezoneH + safezoneY;
        w = 0.2 * safezoneW;
        h = 0.02 * safezoneH;
        sizeEx = 0.035;
      };
      class Text_3: RscStructuredText
      {
        idc = 3002;
        text = "<t size='0.75' align='left' font='PuristaMedium' color='#FFFFFF'>You must have $1000 in your bank in order to make this purchase"; //--- ToDo: Localize;
        font = "Metropolis";
        x = 0.851 * safezoneW + safezoneX;
        y = 0.237 * safezoneH + safezoneY;
        w = 0.15 * safezoneW;
        h = 0.03 * safezoneH;
        sizeEx = 0.033;
      };

    };
  };

  class NZF_Notifications4
  {
    name = "NZF_Notifications4";
    idd = 4506;
    movingEnable = true;
    enableSimulation = true;
    duration = 5;
      onLoad = "uiNamespace setVariable ['NZF_Notifications4',_this select 0]";

    class controls
    {
      class Iamge_4: RscPicture
      {
        idc = 4500;
        text = "Notifications\NotifsRed.paa";
        x = 0.83 * safezoneW + safezoneX;
        y = 0.28 * safezoneH + safezoneY;
        w = 0.17 * safezoneW;
        h = 0.06 * safezoneH;
      };
      class Icon_4: RscPicture
      {
        idc = 4200;
        text = "Notifications\bell.paa";
        x = 0.833333 * safezoneW + safezoneX;
        y = 0.300185 * safezoneH + safezoneY;
        w = 0.015 * safezoneW;
        h = 0.025 * safezoneH;
      };

      class Title_4: Harris_RscText
      {
        idc = 4001;
        text = "Title"; //--- ToDo: Localize;
        font = "Metropolis";
        x = 0.851 * safezoneW + safezoneX;
        y = 0.287 * safezoneH + safezoneY;
        w = 0.2 * safezoneW;
        h = 0.02 * safezoneH;
        sizeEx = 0.035;
      };
      class Text_4: RscStructuredText
      {
        idc = 4002;
        text = "<t size='0.75' align='left' font='PuristaMedium' color='#FFFFFF'>You must have $1000 in your bank in order to make this purchase"; //--- ToDo: Localize;
        font = "Metropolis";
        x = 0.851 * safezoneW + safezoneX;
        y = 0.303 * safezoneH + safezoneY;
        w = 0.15 * safezoneW;
        h = 0.03 * safezoneH;
        sizeEx = 0.033;
      };
    };
  };

  class NZF_Notifications5
  {
    name = "NZF_Notifications5";
    idd = 4507;
    movingEnable = true;
    enableSimulation = true;
    duration = 5;
      onLoad = "uiNamespace setVariable ['NZF_Notifications5',_this select 0]";

    class controls
    {
      class Image_5: RscPicture
      {
        idc = 5500;
        text = "Notifications\NotifsRed.paa";
        x = 0.83 * safezoneW + safezoneX;
        y = 0.346 * safezoneH + safezoneY;
        w = 0.17 * safezoneW;
        h = 0.06 * safezoneH;
      };
      class Icon_5: RscPicture
      {
        idc = 5200;
        text = "Notifications\bell.paa";
        x = 0.833333 * safezoneW + safezoneX;
        y = 0.366185 * safezoneH + safezoneY;
        w = 0.015 * safezoneW;
        h = 0.025 * safezoneH;
      };

      class Title_5: Harris_RscText
      {
        idc = 5001;
        text = "Title"; //--- ToDo: Localize;
        font = "Metropolis";
        x = 0.851 * safezoneW + safezoneX;
        y = 0.353 * safezoneH + safezoneY;
        w = 0.2 * safezoneW;
        h = 0.02 * safezoneH;
        sizeEx = 0.035;
      };
      class Text_5: RscStructuredText
      {
        idc = 5002;
        text = "<t size='0.75' align='left' font='PuristaMedium' color='#FFFFFF'>You must have $1000 in your bank in order to make this purchase</t>"; //--- ToDo: Localize;
        font = "Metropolis";
        x = 0.851 * safezoneW + safezoneX;
        y = 0.369 * safezoneH + safezoneY;
        w = 0.15 * safezoneW;
        h = 0.03 * safezoneH;
        sizeEx = 0.033;
      };
    };
  };