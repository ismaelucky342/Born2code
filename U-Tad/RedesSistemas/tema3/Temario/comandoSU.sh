*Cambiar cuenta de usuario heredando variables*
cresino@VMLRSO:~$ su LRSO

*Cambiar cuenta de usuario sin heredar variables*
cresino@VMLRSO:~$ sudo - LRSO

*Cambiar la cuenta del usuario root*
cresino@VMLRSO:~$ su
Password:
root@VMLRSO:/home/cresino#

*Cambiamos al usuario root sin heredar las variables de entorno del usuario que ejecuta el comando:*
cresino@VMLRSO:~$ su -

Password: 
root@VMLRSO:~# 