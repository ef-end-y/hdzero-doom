#!/bin/sh

# Load via SD Card if found
if [ -e /mnt/extsd/HDZGOGGLE ]; then
	chmod 777 /mnt/extsd/HDZGOGGLE
        /mnt/extsd/HDZGOGGLE &
else
        chmod 777 /mnt/app/app/HDZGOGGLE
	/mnt/app/app/HDZGOGGLE &
fi



