#!/bin/sh

blih -u corentin.janvier@epitech.eu repository create $1
blih -u corentin.janvier@epitech.eu repository setacl $1 ramassage-tek r
blih -u corentin.janvier@epitech.eu repository getacl $1
