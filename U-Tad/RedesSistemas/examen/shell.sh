#!/bin/bash

# Este script combina múltiples ejemplos comunes de scripting de shell

# Función para saludar al usuario
saludar_usuario() {
  echo "Hola, ¿cuál es tu nombre?"
  read nombre
  echo "Bienvenido, $nombre."
}

# Función para listar archivos en un directorio
listar_archivos() {
  echo "Listado de archivos en el directorio actual:"
  ls
}

# Función para crear un directorio
crear_directorio() {
  echo "Ingrese el nombre del nuevo directorio:"
  read nombre_directorio
  mkdir "$nombre_directorio"
  echo "Directorio '$nombre_directorio' creado."
}

# Función para ejecutar un comando del sistema
ejecutar_comando() {
  echo "Ingrese el comando a ejecutar:"
  read comando
  eval "$comando"
}

# Función principal
main() {
  echo "===== Menú Principal ====="
  echo "1. Saludar al usuario"
  echo "2. Listar archivos en el directorio actual"
  echo "3. Crear un nuevo directorio"
  echo "4. Ejecutar un comando del sistema"
  echo "5. Salir"

  read opcion

  case $opcion in
    1) saludar_usuario ;;
    2) listar_archivos ;;
    3) crear_directorio ;;
    4) ejecutar_comando ;;
    5) echo "Saliendo. ¡Hasta luego!"; exit 0 ;;
    *) echo "Opción no válida. Inténtalo de nuevo." ;;
  esac

  # Llamada recursiva para continuar el menú
  main
}

# Llamar a la función principal
main




#!/bin/bash

# Este es un script más completo en Bash

# Función para mostrar ayuda
mostrar_ayuda() {
  echo "Uso: $0 -n NOMBRE [-a EDAD]"
  echo "  -n NOMBRE: Especifica el nombre."
  echo "  -a EDAD: Opcional. Especifica la edad."
  exit 1
}

# Manejar argumentos de línea de comandos
while getopts ":n:a:" opcion; do
  case $opcion in
    n)
      nombre=$OPTARG
      ;;
    a)
      edad=$OPTARG
      ;;
    \?)
      echo "Opción inválida: -$OPTARG"
      mostrar_ayuda
      ;;
    :)
      echo "La opción -$OPTARG requiere un argumento."
      mostrar_ayuda
      ;;
  esac
done

# Verificar si el nombre fue proporcionado
if [ -z "$nombre" ]; then
  echo "Debes proporcionar un nombre."
  mostrar_ayuda
fi

# Función para saludar
saludar() {
  echo "Hola, $nombre!"
  if [ -n "$edad" ]; then
    echo "Tienes $edad años."
  fi
}

# Llamar a la función de saludo
saludar
