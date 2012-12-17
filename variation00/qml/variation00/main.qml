import QtQuick 1.0
import QtWebKit 1.0
//import Effects 1.0
import "menu/"
import StarMenu 1.0

// qsTr("some text") used for translation

// mouse click
//   na obrazek -> zmizet (menu_exit + copyright + PAUSE)
//   na ikony menu_exit/menu_main spusti animaci a otevre prislusna submenu

Rectangle {
  id: win_main
  width: 1; height: 1;
  color: "#CC77FF"
  focus: true  // needed for keyboard keys catching

  Background {
    id: mainBg
    isPaused: true
    onIsPausedChanged: {
      /* PAUSE & stisknete tlacitko... messages */
      pauseMsgs.visible = (mainBg.isPaused) ? true : false
      /* copyleft msg */
      copyrightMsg.visible = (mainBg.isPaused) ? true : false
    }
  }

  /* catch mouse and un-pause the game on whatever click */
  MouseArea {
    anchors.fill: parent
    onClicked: if (mainBg.isPaused) mainBg.isPaused = false
  }

  /* catch keyboard and un-pause the game on any keypress */
  Keys.onPressed: {
    if (event.key == Qt.Key_Shift ||
        event.key == Qt.Key_Control ||
        event.key == Qt.Key_Alt ||
        event.key == Qt.Key_Meta ||
        event.key == Qt.Key_Menu ||
        event.key == Qt.Key_Keypad) return
    if (mainBg.isPaused) mainBg.isPaused = false
  }

  Column {
    id: pauseMsgs
    anchors.centerIn: parent
    spacing: 10

    Text {
      anchors.horizontalCenter: parent.horizontalCenter
      color: "red"
      font.bold: true
      font.pixelSize: win_main.height / 8
      style: Text.Outline
      styleColor: "black"
      //font.pointSize: 40.78
      text: "PAUZA"
      smooth: true
    }

    Text {
      anchors.horizontalCenter: parent.horizontalCenter
      color: "yellow"
      style: Text.Outline
      styleColor: "black"
      smooth: true
      text: "stisknete tlacitko na klavesnici nebo mysi pro pokracovani ve hre"
    }
  }

  Text {
    id: copyrightMsg;
    //anchors.horizontalCenter: parent
    anchors.bottomMargin: 30
    anchors.bottom: parent.bottom
    anchors.horizontalCenter: parent.horizontalCenter
    smooth: true
    color: "#FF6633"
    text: "(c) Radek, Lukas, Honza"
  }

  Help {
    id: myHelp
    rectBase: parent
    visible: false
    signal setVisibility(bool setVisible)
    onSetVisibility: {
      if (setVisible)
      {
        myHelp.visible = true;
        myHelp.focus = true;
      }
      else
      {
        myHelp.visible = false;
        win_main.focus = true;
      }
    }

  }

  Help {
    id: myShop
    rectBase: parent
    myUrl: "html/shop.html"
    visible: false
    signal setVisibility(bool setVisible)
    onSetVisibility: {
      if (setVisible)
      {
        myShop.visible = true;
        myShop.focus = true;
      }
      else
      {
        myShop.visible = false;
        win_main.focus = true;
      }
    }

  }

  MyMenu {
    id: menu_exit
    anchors {
      bottom: parent.bottom
      left: parent.left
      leftMargin: 16
      bottomMargin: 16
    }
    width: win_main.height / 9; height: win_main.height / 9;
    icon: "menu_exit"
    //onMouseClick: {
    //  //FIXME nejak rekurzivne zavrit cele menu!
    //  if (menuExitSub0.closed)
    //    menuExitSub0.closed = false
    //  else
    //    menuExitSub0.closed = true
    //}
    //Component.onCompleted: {
    //  menuExitSub0.midX = menu_exit.x + menu_exit.width/2
    //  menuExitSub0.midY: menu_exit.y + menu_exit.height/2
    //}
  }

  MyMenu {
    id: menu_main;
    anchors {
      bottom: parent.bottom
      right: parent.right
      rightMargin: 16
      bottomMargin: 16
    }
    width: win_main.height / 8; height: win_main.height / 8;
    icon: "menu_main"

    //FIXME testovani "pause"
    //onMouseClick: {
    //  mainBg.isPaused = true
    //  console.log("main button clicked")
    //}

    //FIXME spojit pauzu s vypnutim rotace?
    RotationAnimation on rotation {
      duration: 20000
      loops: Animation.Infinite
      from: 0
      to: 360
    }
  }

  BorderImage {
    id: border00
    visible: false
    width: 450
    height: 120
    anchors {
      right: parent.right
      bottom: parent.bottom
      bottomMargin: parent.height / 3.7
      rightMargin: parent.width / 16
    }
    //border { left: 140; top: 76; right: 140; bottom: 76}
    border { left: 42; top: 21; right: 42; bottom: 21}
    horizontalTileMode: BorderImage.Stretch
    verticalTileMode: BorderImage.Stretch
    source: "misc_img/border_text01.png"

    //property bool nowVisible: false
    signal setVisibility(bool setVisible)
    onSetVisibility: {
      if (setVisible)
      {
        border00.visible = true;
        textInput00.focus = true;
      }
      else
      {
      console.log("nazdarek");
        border00.visible = false;
        win_main.focus = true;
      }
    }

    TextInput {
      id: textInput00
      selectByMouse: true
      font.bold: false
      font.pixelSize: parent.height / 4
      font.italic: true
      color: "yellow"  // text color
      horizontalAlignment: TextInput.AlignHCenter
      validator: RegExpValidator {
        regExp: /[a-zA-Z0-9_]+/
      }
      onAccepted: console.log("text " + displayText + " valid!")
      anchors {
        verticalCenter: parent.verticalCenter
        horizontalCenter: parent.horizontalCenter
      }
    }

    //SequentialAnimation on x {
    //  id: movement
    //  loops: Animation.Infinite
    //  PropertyAnimation { to: 300 }
    //  PropertyAnimation { to: 0 }
    //}
  }

  Rectangle {
    id: savedMsg;
    visible: false
    radius: win_main.height / 30
    color: "black"
    //color: "brown"
    opacity: 0.5
    height: savedMsgTxt.height + 30
    width: savedMsgTxt.width + 30
    anchors {
      verticalCenter: parent.verticalCenter
      horizontalCenter: parent.horizontalCenter
    }

    signal showUp
    onShowUp: { savedMsg.visible = true; savedMsgTimer.restart(); }

    Text {
      id: savedMsgTxt;
      anchors {
        verticalCenter: parent.verticalCenter
        horizontalCenter: parent.horizontalCenter
      }
      color: "yellow"
      font.bold: true
      font.pixelSize: win_main.height / 14
      //style: Text.Outline
      //styleColor: "black"
      smooth: true
      text: "Hra ulozena"

      Timer {
        id: savedMsgTimer
        interval: 1500
        //running: false
        onTriggered: savedMsg.visible = false
        //restart
      }
    }
  }

  StarMenu {
    id: starMenuExit
    objectName: "Menu2"
    anchors.fill: menu_exit
    smooth: true
    radiusH: menu_exit.height
    radiusV: menu_exit.height
    starCenterVisible: false
    //visualParent: menu_main // where to click to close starmenu
    color: Qt.rgba(255, 0, 0, 0)
    //Component.onCompleted: starMenu.rootMenu = true;

    center.x: menu_exit.x + (menu_exit.width >> 1)
    center.y: menu_exit.y + (menu_exit.height >> 1)

    opacity: 1
    /* counter clock-wise */
    //rotation: 365 / 4 - 9

    onStarMenuClosing: {
      mainBg.isPaused = false;
      border00.setVisibility(false);
      myShop.setVisibility(false);
      myHelp.setVisibility(false);
    }

    StarItem {
      width: menu_exit.height; height: menu_exit.height
      scale: 0.8
      zoomHoverValue: 1

      Behavior on x { NumberAnimation { duration: 500; easing.type: Easing.OutBounce } }
      Behavior on y { NumberAnimation { duration: 500; easing.type: Easing.OutBounce } }
      Behavior on scale { NumberAnimation { duration: 200; easing.type: Easing.OutBounce } }
      Behavior on opacity { NumberAnimation { duration: 400 } }

      MyMenu {
        anchors.fill: parent; smooth: true
        icon: "exit_hard0"
        onMouseClick: {
          console.log("quit clicked")
          Qt.quit();
          // text_msg.visible po nejaky delay
        }
      }
    }
    StarItem {
      width: menu_exit.height; height: menu_exit.height
      scale: 0.8
      zoomHoverValue: 1

      Behavior on x { NumberAnimation { duration: 500; easing.type: Easing.OutBounce } }
      Behavior on y { NumberAnimation { duration: 500; easing.type: Easing.OutBounce } }
      Behavior on scale { NumberAnimation { duration: 200; easing.type: Easing.OutBounce } }
      Behavior on opacity { NumberAnimation { duration: 400 } }

      MyMenu {
        anchors.fill: parent; smooth: true
        icon: "save_as0"
        onMouseClick: {
          console.log("quit clicked")
          savedMsg.showUp()
          // text_msg.visible po nejaky delay
        }
      }
    }

    StarItem { width: menu_exit.height; height: menu_exit.height }
    StarItem { width: menu_exit.height; height: menu_exit.height }
    StarItem { width: menu_exit.height; height: menu_exit.height }
  }

  StarMenu {
    id: starMenu
    objectName: "Menu1"
    anchors.fill: menu_main
    smooth: true
    radiusH: menu_main.height
    radiusV: menu_main.height
    starCenterVisible: false
    //visualParent: menu_main // where to click to close starmenu
    color: Qt.rgba(255, 0, 0, 0)
    //Component.onCompleted: starMenu.rootMenu = true;

    center.x: menu_main.x + (menu_main.width >> 1)
    center.y: menu_main.y + (menu_main.height >> 1)

    opacity: 1
    /* counter clock-wise */
    rotation: 365 / 4 - 9

    onStarMenuClosing: {
      mainBg.isPaused = false;
      border00.setVisibility(false);
      myShop.setVisibility(false);
      myHelp.setVisibility(false);
    }

    /* star items are in counter clock-wise order */
    StarItem {
      width: menu_main.height; height: menu_main.height
      //onClicked: console.log("HOVER ITEM STARITEM TEEXT CLICKED");
      scale: 0.8
      zoomHoverValue: 1

      Behavior on x { NumberAnimation { duration: 500; easing.type: Easing.OutBounce } }
      Behavior on y { NumberAnimation { duration: 500; easing.type: Easing.OutBounce } }
      Behavior on scale { NumberAnimation { duration: 200; easing.type: Easing.OutBounce } }
      Behavior on opacity { NumberAnimation { duration: 400 } }

      MyMenu {
        id: menuName
        anchors.fill: parent; smooth: true
        icon: "name_input0"
        onMouseClick: {
          mainBg.isPaused = true;
          myHelp.setVisibility(false)
          myShop.setVisibility(false)
          if (border00.visible)
            border00.setVisibility(false)
          else
            border00.setVisibility(true)
        }
      }

/*
      StarMenu {
        id: starMenuName
        objectName: "Menu9"
        anchors.fill: menuName
        smooth: true
        radiusH: menu_main.height
        radiusV: menu_main.height
        rotation: 365 / 4 - 9

        StarItem { width: menu_main.height; height: menu_main.height
          Image {
            anchors.fill: parent
            source: "menu_icon/market01.png"
          }
        }
      }
*/
    }
    StarItem {
      width: menu_main.height; height: menu_main.height
      scale: 0.8
      zoomHoverValue: 1

      Behavior on x { NumberAnimation { duration: 500; easing.type: Easing.OutBounce } }
      Behavior on y { NumberAnimation { duration: 500; easing.type: Easing.OutBounce } }
      Behavior on scale { NumberAnimation { duration: 200; easing.type: Easing.OutBounce } }
      Behavior on opacity { NumberAnimation { duration: 400 } }

      MyMenu {
        anchors.fill: parent; smooth: true
        icon: "market0"
        onMouseClick: {
          mainBg.isPaused = true;
          myHelp.setVisibility(false)
          border00.setVisibility(false)
          if (myShop.visible)
            myShop.setVisibility(false)
          else
            myShop.setVisibility(true)
        }
      }
    }
    StarItem {
      width: menu_main.height; height: menu_main.height
      scale: 0.8
      zoomHoverValue: 1

      Behavior on x { NumberAnimation { duration: 500; easing.type: Easing.OutBounce } }
      Behavior on y { NumberAnimation { duration: 500; easing.type: Easing.OutBounce } }
      Behavior on scale { NumberAnimation { duration: 200; easing.type: Easing.OutBounce } }
      Behavior on opacity { NumberAnimation { duration: 400 } }

      MyMenu {
        anchors.fill: parent; smooth: true
        icon: "help0"
        onMouseClick: {
          mainBg.isPaused = true;
          border00.setVisibility(false)
          myShop.setVisibility(false)
          if (myHelp.visible)
            myHelp.setVisibility(false)
          else
            myHelp.setVisibility(true)
        }
      }
    }

    StarItem { width: menu_main.height; height: menu_main.height }
    StarItem { width: menu_main.height; height: menu_main.height }
    StarItem { width: menu_main.height; height: menu_main.height }

    StarItem { width: menu_main.height; height: menu_main.height }
    //StarItem { width: menu_main.height; height: menu_main.height }
    //StarItem { width: menu_main.height; height: menu_main.height }
  }
}

// vim: set ft=javascript:
