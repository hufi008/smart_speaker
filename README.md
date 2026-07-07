# smart_speaker
ESPHome Smart Speaker

## getting startet
Folgendes ist zu tun, damit man unter Windoof loslegen kann:
- lange Pfade einschalten: mit regedit HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\FileSystem\LongPathsEnabled von 0 auf 1 setzen; Neustart
- esphome installieren: guckst du [hier](https://esphome.io/guides/installing_esphome/)
- "esphome version" gibt folgenden Output "Version: 2026.6.2"; das ist gut
- ins Home-Verzeichnis wechseln; "mkdir config"; da landet alles drin
- Device Builder installieren: "pip install tornado esptool"
- Device Builder starten: "esphome dashboard config"
- im Browser "localhost:6052" öffnen
- loslegen :-)
## Optional
- zweites Fenster aufmachen
- ins Home-Verzeichnis wechseln; "esphome logs mein-project.yaml --no-states"

## Noch viel einfacher
Hab ich aber jetzt erst gefunden, diw Windows App unter [hier](https://desktop.esphome.io/)
