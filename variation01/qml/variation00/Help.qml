import QtQuick 1.0
import QtWebKit 1.0

Flickable {
  id: myFlickable
  interactive: true
  property alias myUrl: web00.url
  property variant rectBase: parent
  boundsBehavior: Flickable.StopAtBounds
  flickDeceleration: 0

  //width: rectBase.width
  //height: rectBase.height
  //contentWidth: rectBase.width
  contentHeight: rectBase.height
  //anchors {
  //  left:parent.left
  //}

  anchors {
    fill: rectBase
    leftMargin: 70
    rightMargin: 70
    bottomMargin: 70
    topMargin: 70
  }

  WebView {
    id: web00
    url: Qt.resolvedUrl( "html/help.html" )
    //width: flashingblob.width
    //height: win_main.height
    preferredWidth: myFlickable.width
    preferredHeight: myFlickable.height
    //x: 0
    //y: 0
  }
}