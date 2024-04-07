 #### ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?

**Mantén tu repositorio ordenado:** Evita que archivos innecesarios como archivos temporales, binarios o de configuración personal se rastreen en el historial de Git.

**Mejora la colaboración:** Comparte un archivo .gitignore global o local con tu equipo para asegurar que todos ignoren los mismos archivos.

**Reduce el tamaño del repositorio:** Al ignorar archivos grandes, reduces el tamaño del repositorio y optimizas el tiempo de descarga y subida


Configuración del archivo .gitignore

Ubicación:

Global: ~/.config/git/ignore (ignora archivos en todos los repositorios)
Local: .gitignore (ignora archivos en el repositorio actual)
Sintaxis:

Cada línea representa un patrón de archivo a ignorar.
Comodines:
? : Coincide con cualquier caracter.
*: Coincide con cualquier cantidad de caracteres.
Negación: ! delante del patrón para incluirlo (excepción).
Comentarios: # al inicio de la línea.


# Archivos temporales
node_modules/
tmp/
*.tmp

# Archivos de configuración
.env
config.local.js

# Binarios
bin/