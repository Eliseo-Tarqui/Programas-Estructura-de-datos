# Cargar librerías
library(ggplot2)
library(reshape2)

# Leer el archivo CSV generado por tu programa C++
datos <- read.csv("resultados_tiempos.csv")

# Convertir los datos a formato largo para graficar
datos_largos <- melt(datos, id.vars = "Estructura")

# Renombrar columnas
colnames(datos_largos) <- c("Estructura", "Operacion", "Tiempo")

# Mostrar resumen en consola
cat("\nRESUMEN DE TIEMPOS (milisegundos):\n")
print(aggregate(Tiempo ~ Estructura + Operacion, data = datos_largos, FUN = mean))

# Crear gráfico de barras
ggplot(datos_largos, aes(x = Estructura, y = Tiempo, fill = Operacion)) +
  geom_bar(stat = "identity", position = "dodge") +
  labs(title = "Comparación de tiempos por estructura y operación",
       y = "Tiempo (ms)", x = "Estructura") +
  theme_minimal()
