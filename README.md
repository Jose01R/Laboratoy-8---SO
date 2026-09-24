# Laboratorio 8 - Qt Creator

Este laboratorio forma parte del repositorio central [Curso - Sistemas Operativos](https://github.com/Jose01R/Curso-Sistemas-Operativos) y corresponde a una práctica académica de programación en C++ utilizando Qt Creator.

## Descripción

El proyecto implementa una aplicación gráfica para explorar conceptos fundamentales de sistemas operativos y programación concurrente. La interfaz permite acceder a diferentes demostraciones relacionadas con procesos, comunicación, sincronización y el patrón productor-consumidor.

## Temas tratados

- Desarrollo de interfaces gráficas con Qt Creator y Qt Widgets.
- Programación orientada a objetos en C++.
- Configuración y compilación de proyectos mediante QMake.
- Uso de `QMainWindow` y formularios `.ui`.
- Programación concurrente y ejecución de tareas independientes.
- Exclusión mutua mediante mutexes.
- Comunicación entre componentes o hilos.
- Patrón productor-consumidor.
- Uso de buffers compartidos.
- Contadores y estaciones de trabajo simuladas.
- Organización de código mediante archivos `.cpp` y `.h`.

## Tecnologías utilizadas

- C++17
- Qt / Qt Widgets
- Qt Creator
- QMake
- C y C++
- Makefile
- Ubuntu o cualquier sistema compatible con Qt

## Requisitos

Para compilar y ejecutar el proyecto se necesita:

- Qt Creator instalado.
- Qt 5 o Qt 6 con el módulo Qt Widgets.
- Un compilador compatible con C++17.
- QMake y Make.
- Un sistema operativo compatible, preferiblemente Ubuntu o Linux.

## Ejecución con Qt Creator

1. Clona el repositorio:

   ```bash
   git clone https://github.com/Jose01R/Laboratoy-8---SO.git
   ```

2. Ingresa al directorio del proyecto:

   ```bash
   cd Laboratoy-8---SO
   ```

3. Abre `Laboratory8.pro` en Qt Creator.
4. Selecciona un kit de compilación compatible.
5. Configura el proyecto y presiona **Run** para compilarlo y ejecutarlo.

## Compilación desde la terminal

También es posible compilar el proyecto utilizando QMake:

```bash
qmake Laboratory8.pro
make
./Laboratory8
```

El nombre del ejecutable puede variar según la configuración del kit y del sistema operativo.

## Estructura principal

```text
Laboratoy-8---SO/
├── Laboratory8.pro
├── main.cpp
├── mainwindow.cpp/.h/.ui
├── buffer.cpp/.h
├── producer.cpp/.h
├── consumer.cpp/.h
├── mutex.cpp/.h
├── messenger.cpp/.h
├── counter.cpp/.h
├── chargingstation.cpp/.h
├── dialog*.cpp/.h/.ui
└── README.md
```

### Componentes destacados

- `mainwindow.*`: ventana principal de la aplicación.
- `producer.*` y `consumer.*`: componentes relacionados con el patrón productor-consumidor.
- `buffer.*`: representación del buffer compartido.
- `mutex.*`: demostración del uso de exclusión mutua.
- `messenger.*`: componente relacionado con comunicación entre partes de la aplicación.
- `counter.*`: lógica asociada a contadores.
- `chargingstation.*`: simulación de una estación de trabajo o carga.
- `dialog*.ui`: formularios de las ventanas y demostraciones gráficas.

## Propósito académico

El objetivo de este laboratorio es aplicar de manera práctica conceptos de sistemas operativos mediante una aplicación gráfica. El proyecto sirve como ejercicio para comprender cómo se integran la programación en C++, las interfaces gráficas y los mecanismos de concurrencia y sincronización.

## Repositorio del curso

Este laboratorio forma parte del índice central del curso:

[Curso - Sistemas Operativos](https://github.com/Jose01R/Curso-Sistemas-Operativos)

## Autor

José Andrés Ramírez Jiménez

---

Proyecto académico desarrollado como parte del curso de Sistemas Operativos.
