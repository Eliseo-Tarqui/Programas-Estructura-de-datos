import sqlite3

# Conexión a la base de datos (si no existe, se crea)
conexion = sqlite3.connect("moto_carga.db")
cursor = conexion.cursor()

# Crear tabla de personas
cursor.execute("""
    CREATE TABLE IF NOT EXISTS personas (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        nombre TEXT NOT NULL,
        dni TEXT NOT NULL,
        placa TEXT NOT NULL
    )
""")

# Crear tabla de reuniones
cursor.execute("""
    CREATE TABLE IF NOT EXISTS reuniones (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        fecha TEXT NOT NULL
        descripcion TEXT       
    )
""")

# Crear tabla de permisos
cursor.execute("""
    CREATE TABLE IF NOT EXISTS permisos (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        persona_id INTEGER NOT NULL,
        motivo TEXT NOT NULL,
        fecha TEXT NOT NULL,
        FOREIGN KEY (persona_id) REFERENCES personas(id)
    )
""")

# Crear tabla de asistencias
cursor.execute("""
    CREATE TABLE IF NOT EXISTS asistencias (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        persona_id INTEGER NOT NULL,
        reunion_id INTEGER NOT NULL,
        asistio INTEGER NOT NULL,
        FOREIGN KEY (persona_id) REFERENCES personas(id),
        FOREIGN KEY (reunion_id) REFERENCES reuniones(id)
    )
""")

# Crear tabla de cobranzas
cursor.execute("""
    CREATE TABLE IF NOT EXISTS cobranzas (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        persona_id INTEGER NOT NULL,
        monto REAL NOT NULL,
        fecha TEXT NOT NULL,
        FOREIGN KEY (persona_id) REFERENCES personas(id)
    )
""")

# Guardar cambios y cerrar
conexion.commit()
conexion.close()

print("✅ Tablas creadas correctamente.")
