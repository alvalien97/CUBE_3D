# cub3d 🎮
> Un proyecto de 42 que consiste en crear un juego dinámico en 3D utilizando los principios del **Raycasting** (inspirado en el mítico *Wolfenstein 3D*), utilizando la librería gráfica **MiniLibX**.

## 📋 Índice
1. [Acerca del proyecto](#acerca-del-proyecto)
2. [Características](#características)
3. [Instalación y Compilación](#instalación-y-compilación)
4. [Cómo usar / Ejecutar](#cómo-usar--ejecutar)
5. [Controles](#controles)
6. [Estructura del mapa (.cub)](#estructura-del-mapa-cub)

## 🚀 Acerca del proyecto
El objetivo de **cub3d** es recrear una perspectiva en primera persona dentro de un laberinto. A través de matemáticas y vectores aplicados en C, el programa calcula la distancia de los rayos lanzados desde el punto de vista del jugador hasta las paredes del mapa, renderizando texturas en las paredes norte, sur, este y oeste, además de gestionar colores personalizados para el suelo y el techo.

## ✨ Características
* **Algoritmo de Raycasting:** Renderizado fluido de un entorno tridimensional a partir de un mapa en 2D.
* **Sistema de Texturas:** Carga de texturas independientes para cada orientación de las paredes (Norte, Sur, Este, Oeste).
* **Gestión de Colores:** Selector RGB personalizable para el suelo y el techo.
* **Movimiento Fluido:** Desplazamiento por el mapa con detección de colisiones contra las paredes.
* **Manejo de Errores Robusto:** Validación estricta del archivo de mapa (`.cub`), texturas y parámetros de entrada.

## ⚙️ Requisitos previos
Para compilar y ejecutar este proyecto necesitas un entorno compatible con **Linux** (o macOS, según tu versión de MiniLibX) y las dependencias gráficas necesarias para MiniLibX (como X11 y Xext).
En sistemas basados en Debian/Ubuntu, puedes instalar las dependencias con:
```bash

🕹️ Cómo usar / Ejecutar
Una vez compilado, ejecuta el programa pasando como argumento un archivo de mapa válido con la extensión .cub:

Bash
./cub3d maps/valid/map.cub
⌨️ Controles
W / A / S / D o Flechas de dirección: Moverse hacia adelante, izquierda, atrás y derecha.

Flecha Izquierda / Derecha: Girar la cámara.

ESC o clic en la 'X' de la ventana: Salir del juego de forma limpia.

🗺️ Estructura del mapa (.cub)
El archivo de configuración del mapa debe definir las rutas de las texturas, los colores del suelo y el techo, y la cuadrícula del mapa utilizando los siguientes caracteres:

0: Espacio vacío (transitable).

1: Pared.

N / S / E / W: Posición inicial del jugador y su orientación cardinal.

Ejemplo de archivo .cub:
Plaintext
NO ./path_to_north_texture.xpm
SO ./path_to_south_texture.xpm
WE ./path_to_west_texture.xpm
EA ./path_to_east_texture.xpm

F 220,100,0
C 225,30,0

111111
100401
101001
111111
