#!/bin/bash
echo "Importando chaves"
rpm --import https://packages.microsoft.com/keys/microsoft.asc
echo "Adicionando ao repositório..."
sh -c 'echo -e "[code]\nname=Visual Studio Code\nbaseurl=https://packages.microsoft.com/yumrepos/vscode\nenabled=1\ngpgcheck=1\ngpgkey=https://packages.microsoft.com/keys/microsoft.asc" > /etc/yum.repos.d/vscode.repo'
echo "Sincronizando"
check-update -y
echo "Instalando Visual Studio Code"
dnf install code -y
echo "Instalando GCC"
dnf install gcc -y
echo "Instalando GDB"
dnf install gdb -y
