# studienarbeit_gateway
Anbindung eines Serviceroboter Frameworks an ein OPC UA Backend
Eigenschaft:
Das Gateway, das in dieser Studienarbeit entwickelt wurde, ist ein ROS-Package. 
Einstellung
Das verwendete Build-In-System ist catkin_make. Deshalb müssen Sie einen Catkin-workspace erstellen und dieses ROS-Package dem workspace hinzufügen und kompilieren. Den Prozess zur Installieren und der konfigurieren der ROS-Umgebung und den Prozess zum Kompilieren des Packages kann man in ROS Wiki: http://wiki.ros.org/ROS/Tutorials finden. In dem Gateway werden einige Funktionen des Gateways basierend auf dem ROS Command Tool implementiert. Daher müssen Sie der Linux-Umgebungskonfigurationsdatei bashrc "source /opt/ros/<distro>/setup.bash" und den gleichen Satz für das von Ihr erstellte workspace hinzufügen.
Beispiel:  die Version von ROS ist „kinetic“.
der Name von ROS workspace ist „catkin_ws“ und die Adress von ROS workspace ist „~/catkin_ws“.
man soll die folgenden Prozesse ausführen.
cd ~
gedit .bashrc
man soll die folgended Sätze in „.bashrc“ schreiben und speichern： 
source /opt/ros/kinetic/setup.bash
source ~/catkin_ws/devel/setup.bash

Dieses ROS Package enthält die folgenden Dokumente, die in dem Ordner „src“ liegen:
Gateway2Service.cpp: Überführung des ROS Service in OPC UA Backend
Gateway2Topic.cpp: Überführung des ROS Topic in OPC UA Backend
Gateway2UA_Object.cpp: Überführung eines OPC UA Objekts in ROS
Gateway2UA_Method.cpp: Überführung einer OPC UA Methode in ROS
Erstellung der Anwendung
Um beispielsweise Gateway2Service zu erstellen, müssen Sie zunächst Werkzeug2Service starten.
Die spezifischen Schritte sind wie folgt:
1) Öffnen Sie Werkzeug2Service und befolgen Sie die Anweisung. (die Adresse von ROS workspace muss richtig sein, sonst kann der Prozess zum Kompilieren nicht funktionieren, wenn Sie falsch workspace gegeben haben, sollen Sie „strg-C“ geben und nochmal Werkzeug2Service starten)
 roscd studienarbeit_gateway/src
./Werkzeug2Service
2)Geben Sie den Pfad zum ROS Workspace an
3) Eine Liste der Services, die angerufen werden können, wird zu diesem Zeitpunkt angezeigt.
(Sie müssen bestätigen, dass ROS Master aktiv läuft)
4) Wählen Sie den Service aus, der an das OPC UA-Backend übergeben werden soll.
(Nur die im ROS-Master registrierte ROS Kommunikation kann übergeben werden. Wenn der zu übertragende Service nicht zu der Liste gehört, wird das Gateway falsch laufen, dann müssen Sie nochmal von dem ersten Schritt an machen)
5) Das Tool generiert das entsprechende Gateway
6) Die Ergebnisse zeigt an, dass der Gateway2Service erstellt ist.
Verwenden Sie „rosrun studienarbeit_gateway Gateway2Service“, um dieses Gateway zu starten. Das Gateway bleibt aktiv und wartet auf die Anfrage des Clients.
Benutzer können die Anwendung mit dem OPC UA Client mit dem Gateway verbinden. Die OPC-UA-Methode mit dem gleichen Namen wie der ROS-Service wurde im Gateway eingerichtet, und der ROS-Service kann durch Aufruf von Method aufgerufen werden.
Geben Sie "Strg + C" ein, um das Gateway zu beenden
Bei der Verwendung des Tools „Werkzeug2Topic“ ist der Prozess ähnlich wie „Werkzeug2Service“
Bei der Verwendung der Tools „Werkzeug2UA_Object“, und „Werkzeug2UA_Method“ sollen Sie die das NodeId der zu übertragenden OPC UA Objekt und Methode eingeben. 
Hinweis: 
1) Über das Gateway kann nur die Nachricht mit den Daten in Form eines Scalars übertragen werden. 
2) Die in dem Ordner „srv“ und „msg“ liegende Datei sollen Sie nicht verändern, sonst läuft das Gateway nicht mehr.
3) In dem Ordner „devel“ in workspace können Sie jeweils die Header-Datei des Nachrichtentyps und die ausführbare Datei des Gateways finden.
4) Alle Dateien, deren Namen „_vorlag“ hat, sollen Sie nicht verändern.

