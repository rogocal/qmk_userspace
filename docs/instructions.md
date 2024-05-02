# Rogocal Userspace

This repo is made to be used with a custom configuration of the firmware without messing around with the original repo. This is achieved by cloning my personal repo (which should be cleaned to be honest) and making a symbolic link of my own keyboard inside the qmk repo.

## Steps to set up the environment

1. Just clone this repo and open it. It should download and grab latest qmk setup.
2. Select `open in devcontainer`, this should download and open the QMK CLI image.
3. Go to `/workspaces` folder inside the container and check out the keyboard repository.

        cd /workspaces

4. Clone the repository containing the custom qmk_firmware keyboard.

        git clone https://github.com/rogocal/corne-qmk.git
    
5. Make a symlink from the keyboard folder into the `qmk_firmware` folder dowloaded in step `1`.

        ln -s /workspaces/corne-qmk/picophant40/ /workspaces/qmk_firmware/keyboards/picophant40

6. Now you can compile as normal, for example

        qmk compile -kb picophant40 -km default

7. It is recomended to use the VSCode shortcut `ctrl+shift+B` to compile the whole userpace, you cal also trigger individual tasks.

## Creating new keymaps

To create new keymap follow these steps

    qmk new-keymap

