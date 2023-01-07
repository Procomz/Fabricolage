Installation : 
- Installer le logiciel Arduino: https://www.arduino.cc/en/software
- Lancer le logiciel Arduino 
- Ouvrir le menu Outils -> Type de carte -> Gestionnaire de carte
- Installer le module "esp32" créé par Espressif Systems
- Créer ou ouvrir un programme 
- Choisir la bonne carte : Outils -> Type de carte -> ESP32 Arduino -> ESP32 Wrover Module

La configuration de la carte par défaut fonctionne : 
- Upload Speed : 921600
- Flash Frequency : 80MHz
- Flash Mode : QIO
- Parition Scheme : Default 4MB with spiffs (1.2MB APP/1.5MB SPIFFS)
- Core Debug Level : Rien 
- Port : COMx

Il suffit ensuite de programmer la carte comme une carte Arduino classique. 
