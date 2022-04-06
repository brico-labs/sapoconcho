====== Montaje y programación de Sapoconcho XL ======

<WRAP tip>El proyecto [[https://bricolabs.cc/wiki/proyectos/sapoconcho|Sapoconcho]] se ha extendido con muchas versiones y forks. Esta entrada está centrada en el montaje mecánico, electrónico y programación de una versión concreta: Sapoconcho XL (o The Expanse). Se trata como todo el proyecto de un robot sencillo, versátil y (relativamente) barato con un chasis imprimible.</WRAP>

NOTA: El formato de esta wiki está pensado para el montaje paso a paso, pero también para poder ser proyectada durante un curso. Los asistentes podrán verla desde sus dispositivos y avanzar a su ritmo.

{{:proyectos:5d495b8a-2aa0-402c-b93e-4d75850903ff.jpeg|5d495b8a-2aa0-402c-b93e-4d75850903ff.jpeg}}

===== Piezas imprimibles =====

El chasis de Sapoconcho XL consta de las siguientes piezas:

  * Bases superior e inferior.
  * Soporte de motores (1 unidad).
  * Pilares de unión (o separación) de las dos bases (4 unidades). Pueden usarse en su lugar separadores de circuitos de 30mm.
  * Ruedas (2 unidades).
  * Soporte de sensores de ultrasonidos (1 ó 2 unidades).

En una impresora típica de 200x200mm se pueden imprimir todas las piezas en dos tandas.

{{:proyectos:prusa_sapoconcho.jpg|prusa_sapoconcho.jpg}}

Todas las piezas están en este [[https://github.com/felixstdp/SapoconchoXL/tree/main/3D_print|repositorio]] de Github. Ahí puedes encontrar los archivos originales de OpenSCAD para modificarlos a tu gusto o los STL para imprimir directamente.

===== Listado de materiales (BOM) =====

  * Arduino UNO o compatible.
  * Protoshield para Arduino UNO.
  * Driver de motores TB6612 o DRV8833.
  * Dos motores amarillos. Sabemos que es un término muy genérico, pero si estás metido un poco en el mundo maker/DIY o haces una búsqueda rápida en tu plataforma favorita verás a qué nos referimos. Es un tipo de motor de corriente continua muy usado en todo tipo de proyectos y kits, muy fácil de conseguir y muy económico. No necesitamos las ruedas que traen a veces.
  * Gomas de fontanería para las ruedas (2ud). Medida 45×3 mm.
  * Bola de acero de 10 mm.
  * Sensores ultrasónicos HC-SR04 (1 ó 2 ud).
  * Sensores de líneas por infrarrojos (2 ud).
  * Portapilas para montar 4 pilas AA (dos encima y dos debajo).
  * Elevador de tensión DC-DC (step-up, con los integrados LM2587/XL6009).
  * Clavija de alimentación para Arduino UNO (5.5×2.1 mm).
  * Tornillos M3 (12 ud M3x10, 2 ud M3x16, 4 ud M3x30).
  * Tuercas M3 (4 ud).
  * Cables Dupont M-H de 20mm y de 10mm.

==== Enlaces para comprar material ====

Lista de la compra en Amazon [[https://www.amazon.es/hz/wishlist/dl/invite/22YQfvy?ref_=wl_share|https://www.amazon.es/hz/wishlist/dl/invite/22YQfvy?ref_=wl_share]]

===== Montaje mecánico =====

El chasis base tiene pocas piezas y el montaje es muy sencillo.

{{:proyectos:chasis_base.png}}

**Paso 1**: Los motores amarillos se unirán al soporte con 4 tornillos M3x30.

{{:proyectos:foto_5-4-22_22_25_45.jpg|foto_5-4-22_22_25_45.jpg}}

**Paso 2**: Unir la base inferior al soporte con dos tornillos M3x12. También se puede poner ahora la bola loca o 'ballcaster', el tercer punto de apoyo.

{{:proyectos:foto_5-4-22_22_28_43.jpg|foto_5-4-22_22_28_43.jpg}}

**Paso 3**: Montar los 4 pilares a la base inferior con 4 tornillos M3x10.

{{:proyectos:foto_5-4-22_22_34_04.jpg|foto_5-4-22_22_34_04.jpg}}

**Paso 4**: Montar la base superior a los pilares con otros 4 tornillos M3x10. Ojo a la orientación en la foto.

{{:proyectos:montaje_4.jpg|montaje_4.jpg}}

**Paso 5**: Colocar las ruedas -cada una con su 'neumático'-, montar el Arduino UNO con tornillos M3 (dos en diagonal son suficientes) y pinchar la Shield sobre él.

{{:proyectos:montaje_5.jpg|montaje_5.jpg}}

===== Montaje eléctrico/electrónico =====

Arduino no puede operar directamente un motor. Necesita un intermediario o [[https://bricolabs.cc/wiki/guias/control_de_motores|driver]]. Existen dos drivers de motores muy parecidos y válidos para Sapoconcho XL: el Toshiba TB6612 y el DRV8833. Aunque los pines no son iguales, el cableado y la programación hacen que sean intercambiables.

==== Cableado del driver ====

La codificación de pines del driver TB6612 es la siguiente

{{:proyectos:300px-tb6612fng.png?600x376}}

Para el driver DRV883 se tiene

{{:proyectos:drv8833-dual-driver-pinout.jpg|drv8833-dual-driver-pinout.jpg}}

Para conectar el driver vamos a usar cable rígido de colores cortado a medida. Las conexiones son las de la imagen. Aunque el color de los cables no influye en el funcionamiento, para la alimentación y masa (negativo) se suelen utilizar los colores rojo y negro.

{{:proyectos:f06ef1fc-881e-4986-ae7f-a302dd8b34f2.jpeg|f06ef1fc-881e-4986-ae7f-a302dd8b34f2.jpeg}}

A continuación hay que pinchar el driver teniendo cuidado con que los pines y los cable coincidan como en la foto.

{{:proyectos:abb802bd-d2fa-4a7c-aa1a-b700648a8d60.jpeg|abb802bd-d2fa-4a7c-aa1a-b700648a8d60.jpeg}}

==== Cableado de los motores ====

Necesitamos cuatro cables Dupont de 20cmm soldados en un extremos a los motores y con punta macho en el otro extremo para la protoshield. Pueden ir agrupados para hacer un montaje más elegante, aunque no es imprescindible. Tampoco es imprescindible, pero si una buena idea añadir un condensador cerámico de 0.1uF (código 104) en paralelo en cada motor.

{{:proyectos:9297d22d-305f-47bb-bfdc-8db34adc8550.jpeg?800|9297d22d-305f-47bb-bfdc-8db34adc8550.jpeg}}

Los cables Dupont que vengan de los motores se conectarán ahora en los pines correspondientes. En este caso sí que coinciden los cuatro pines de los drivers TB6612 y DRV8833.

{{:proyectos:montaje_8.jpg|montaje_8.jpg}}

Si al probar las funciones de movimiento alguna rueda gira al revés, hay que intercambiar los cables de ese motor.

==== Alimentación ====

Para alimentación utilizaremos un portapilas para 4 pilas AA. Y para que valga para cualquier proyecto, puedas usar pilas recargables y reduzcamos la contaminación añadiremos siempre un [[https://es.wikipedia.org/wiki/Convertidor_reductor-elevador|regulador dc-dc]] elevador para elevar la tensión de salida (step-up). El LM2587 y el XL6009 valen y tienen un tornillo para regular la tensión de salida; un buen valor es 7,5v.

{{:proyectos:b81b3d06-ffa5-4bf8-bc31-b1728914424d.jpeg|b81b3d06-ffa5-4bf8-bc31-b1728914424d.jpeg}}

Las conexiones del step-up son muy sencillas: entrada positiva/negativa (IN+ rojo/IN- negro) desde el portapilas y salida positiva/negaviva (OUT+ rojo/OUT- negro) a la clavija. Además sacaremos un cable con un extremo Dupont macho para alimentar el driver **antes**  del step-up, de IN+ a VM.

{{:proyectos:e9990159-cb36-4224-b8ae-dac534b8b2ad.jpeg|e9990159-cb36-4224-b8ae-dac534b8b2ad.jpeg}}

===== Programación =====

==== Función de movimiento básica ====

Para programar el Arduino con código escrito puedes utilizar la función de movimiento siguiente (copia y pega el código en el IDE).

El código tiene tres partes:

  * En la primera -setup- se incluye la parte del programa que se ejecuta sólo una vez, al iniciar el Arduino.
  * En la segunda -loop- es donde después escribirás el programa principal, que se ejecutará en bucle.
  * En la tercera -drive- es donde se define la función (o subrutina) de movimiento para simplificar el programa principal.

La función drive incluye la numeración y configuración de pines. Puede ponerse en una pestaña aparte en el IDE de Arduino, eso hará que el código principal con el setup y el loop se lea más fácil.
<code>

void setup() {

}

//programa principal
void loop(){

}

//función de movimiento de motores
void drive(int L, int R, int t) //velocidad de las ruedas izquierda y derecha, positivo hacia delante, tiempo en milisegundos
{
//Arduino UNO y driver TB6612/DRV8833
  const int AIN2 = 9; // PWMA
  const int AIN1 = 8;
  const int BIN1 = 7;
  const int BIN2 = 6; // PWMB

//iniciar el modo de los pines para los motores
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2,OUTPUT);

// evitar valores no válidos para el PWM
  L=constrain(L,-255,255);
  R=constrain(R,-255,255);

// poner valores a los pines
  digitalWrite(AIN1, L<0);
  analogWrite(AIN2, L+255*(L<0));
  digitalWrite(BIN1, R<0);
  analogWrite(BIN2, R+255*(R<0));

  delay(t);
}

</code>

==== Movimientos de prueba ====

El uso de la función drive es sencillo. Se llama como **drive (velocidad rueda izquierda, velocidad rueda derecha, tiempo)**  Las velocidades pueden estar entre -255 y 255. Positivo hacia delante, negativo hacia atrás. El tiempo en milisegundos.

Hay cuatro **funciones básicas**:

  * Movimiento hacia adelante: drive(200,200,1000); probar a cambiar los valores de velocidad y tiempo.
  * Movimiento hacia atrás: drive(-200,-200,1000);
  * Giro en redondo: drive(-200,200,1000); probar hacia donde gira.
  * Giro hacia el lado contrario: drive(200,-200,1000);

{{:guias:guias:pid:differential-steering-tutorials-42bots2.png}}

El primer ejercicio puede ser ajustar los valores de movimiento hacia adelante para que se mueva en línea recta. Es poco probable que con dos valores iguales lo haga, los motores no son idénticos.

El segundo ejercicio puede ser ajustar los valores de movimiento de giro para que rote un ángulo fijado, por ejemplo 90 grados o 180 grados.

El tercer ejercicio puede ser encadenar órdenes para hacer figuras, por ejemplo un cuadrado, una estrella…

**Ejercicios más complejos**:

La función drive con dos valores positivos pero diferentes describe un arco. Probar a encadenar arcos para hacer un movimiento en eses. Probar a poner obstáculos y salvarlos serpenteando.

===== Montaje de los sensores =====

Los sensores tienen casi siempre dos pines de alimentación y uno o más pines de datos. La protoshield tiene en un lateral dos líneas para conectar la alimentación a positivo (5V) y negativo (GND).

{{:proyectos:protoshield-mini.jpg|protoshield-mini.jpg}}

==== Sensores de ultrasonidos ====

Los sensores del ultrasonidos HC-SR04 tienen cuatro pienes: alimentación (VCC), masa (GND), trigger y echo. Estos dos últimos los unimos con una soldadura para ahorrarnos un cable, aunque tenemos que advertir que algunos modelos de algunos fabricantes no permiten esto, y al hacerlo no funcionan. Cablearemos con Dupont hembra-macho del sensor a la protoshield.

{{:proyectos:hc-sr04.jpg|hc-sr04.jpg}}

Para leer la distancia que mide el sensor usaremos una nueva función, que de nuevo podemos guardar en una pestaña nueva en el IDE para dejar más limpio el programa principal
<code>

unsigned long sonar(int trig)
{
  pinMode(trig, OUTPUT);
  digitalWrite(trig,LOW); // trigger envia un pulso ultrasónico
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  pinMode(trig, INPUT);
  unsigned long tiempo=pulseIn(trig, HIGH);    // echo espera a recibir la respuesta
  unsigned long distancia= int(0.17*tiempo);  // fórmula para calcular la distancia
  return distancia;
}

</code>

El uso es sencillo, la llamamos como

long int distancia = sonar(pin);

En donde le decimos a qué pin hemos conectado el sensor (en los siguientes programa utilizaremos el 2 y el 3), y la función nos devuelve la distancia al obstáculo en milímetros. Este [[https://github.com/felixstdp/SapoconchoXL/blob/main/ArduinoUNO/us_read.ino|código]] permite leer el sensor y mostrar el resultado por el monitor serie de Arduino para comprobar que funciona.

Los montaremos con los soportes impresos con un tornillo y una tuerca.

=== Mantener la distancia ===

Con un sensor de distancia montado de forma central probaremos la distancia a una pared. Si estamos aún lejos, avanzaremos. Si estamos muy cerca, retrocederemos para mantener la distancia. Si en vez de una pared ponemos la mano, probaremos a manejar 'a distancia' nuestro robot.

{{:proyectos:7e2ce77f-1e60-4c1a-8e3b-6a59a660f16e.jpeg|7e2ce77f-1e60-4c1a-8e3b-6a59a660f16e.jpeg}}

El código principal (al que añadiremos con las funciones drive y sonar) es el siguiente
<code>

void setup() {}

void loop() {
  long int distancia = sonar(2);
  if (distancia<100)
  {
    drive(150,150,50);
  }
  else
  {
    drive(-150,-150,50);
  }

}

</code>

Como diversión si estamos trabajando en grupo podemos poner todos los robots en fila y encenderlos a la vez a ver qué pasa.

=== Evitar obstáculos ===

Con dos sensores de distancia podemos ver por donde está más cerca el obstáculo y girar hacia el lado contrario evitándolo.

{{:proyectos:c5231346-ecce-44e3-ada5-e3ed3365f37e.jpeg?800|c5231346-ecce-44e3-ada5-e3ed3365f37e.jpeg}}

El código ahora es
<code>

void setup() {}

void loop() {
  long int izquierda = sonar(2);
  long int derecha = sonar(3);
  long int distancia = min(izquierda, derecha);
  if (distancia<100)
  {
    if (izquierda<derecha) // cambiar menor por mayor si gira hacia el obstaculo
    {
      drive(150,-150,100);
    }
    else
    {
      drive(-150,150,100);
    }
  }
  else
  {
    drive(150,150,50);
  }

}

</code>

==== Sensores de líneas ====

Los sensores infrarrojos de líneas, tanto con salida analógica como digital utilizan tres pines: alimentación (VCC), masa (GND) y señal. Debes revisar tu sensor, cada fabricante coloca los pines como quiere, y no tiene por qué coincidir con la foto.

{{:proyectos:tcrt5000r.jpg|tcrt5000r.jpg}}

Utilizaremos sensores basados en reflexión TCRT5000 con regulador (importante) que se montarán en el chasis inferior y se cablean a 5v, GND y dos entradas analógicas entre A0 y A5 (con cables Dupond H-M de 20cm).

{{:proyectos:foto_5-4-22_23_20_34.jpg|foto_5-4-22_23_20_34.jpg}}

=== Seguir una línea ===

Para leer los sensores no necesitamos una función extra, Arduino puede hacerlo con su propia analogRead(pin). El siguiente código lee los dos sensores y si uno de ellos está sobre la línea negra gira hacia el otro lado para evitarla (necesita la función drive).
<code>

void setup() {}

void loop()
{
  if (analogRead(A0)<500) drive(-150,150,100);
  if (analogRead(A1)<500) drive(150,-150,100);
  drive(150,150,100);
}

</code>

===== Equipo =====

  * [[https://bricolabs.cc/wiki/user/felixstdp#proyectos|Félix]]
  * [[https://bricolabs.cc/wiki/user/salvari|Sergio]]
  * [[https://bricolabs.cc/wiki/user/manolomira|Manolo]]
  * Dani

===== Enlaces =====

  * [[https://twitter.com/sapoconcho_bot|Sapoconcho en Twitter]]
  * [[https://github.com/felixstdp/SapoconchoXL|SapoconchoXL en Github]]
  * [[https://gitlab.com/felixstdp/SapoconchoXL|SapoconchoXL en Gitlab]]

