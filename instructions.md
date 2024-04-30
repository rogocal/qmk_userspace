just clone this repo and open it. it should download and grab latest qmk setup
open in devcontainer
go to workspaces folder and check out the keyboard repository

cd /workspaces
clone your repository
ln -s /workspaces/corne-qmk/picophant40/ /workspaces/qmk_firmware/keyboards/picophant40
and all the other keyboards
now you can compile as normal
qmk compile -kb picophant40 -km default
