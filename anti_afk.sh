#!/bin/bash

export DISPLAY=:0

for i in {1..300}
do
  echo "$(date '+%H:%M:%S') - Envoi de SHIFT n°$i"
  xdotool key shift
  sleep 60
done

# Notification à la fin
notify-send "Anti-AFK terminé" "Le script a tourné pendant 5h. Tu peux te reposer 😌"

