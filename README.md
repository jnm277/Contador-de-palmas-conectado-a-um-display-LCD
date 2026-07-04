# Contador de palmas conectado a um display-LCD


## MATERIAIS:
| Quantidade | Componente |
| ---------- | ---------- |
| 1 | DISPLAY LCD 16x2 (com interface I2C) |
| 1 | MÓDULO I2C |
| 1 | SENSOR DE SOM KY-038 |
| 1 | ARDUINO UNO |
| 1 | PROTOBOARD |

-------------------------------

## CONEXÕES:


### O display e o módulo I2C:
<img width="1000" height="1000" alt="image" src="https://github.com/user-attachments/assets/0eeaf69b-4b9f-4cb0-be28-d4b319d4a21e" />
No seu protoboard, coloque o display lcd e o módulo I2C alinhados<br/>
(o módulo I2C fica de cabeça para baixo, confira no vídeo com o teste do circuito)

-------------------------

 
### O módulo I2C e o Arduino:
 | Pino do módulo I2C | Pino do Arduino |
 | ------------------ | --------------- |
 | GND | GND |
 | VCC | 5V |
 | SDA | A4 |
 | SCL | A5 |

### RESULTADO DAS CONEXÕES DO DISPLAY E MÓDULO I2C
 <img width="632" height="316" alt="image" src="https://github.com/user-attachments/assets/d8dc4c37-52f9-4ac3-8ca2-1be5d5329b68" />
 
-----------

### O sensor e o Arduino

| Pino do sensor | Pino do Arduíno |
| --- | --- |
| G | GND |
| + | 5V |
| DO | GPIO 4 |

### RESULTADO DAS CONEXÕES DO SENSOR
<img width="595" height="336" alt="image" src="https://github.com/user-attachments/assets/f0744888-8aba-4f72-ae42-a957b9329bfb" />

----------------------

# RESULTADO FINAL + VÍDEO TESTANDO

<img width="4640" height="3472" alt="1000129454" src="https://github.com/user-attachments/assets/c77034bc-bd3e-4068-a610-e24e76238943" />

------------
https://github.com/user-attachments/assets/8516c38e-514c-4a0a-b6ab-5616419385f1




