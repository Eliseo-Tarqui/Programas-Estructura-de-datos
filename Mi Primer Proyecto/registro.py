import sqlite3

def menu():
    while True:
        print("\n--- MENÚ PRINCIPAL ---")
        print("1. Agregar persona")
        print("2. Ver personas registradas")
        print("3. Registrar reunion")
        print("4. Ver reuniones")
        print("5. Registrar permiso")
        print("6. Ver permisos registrados")
        print("7. Buscar permisos por nombre")
        print("8. Registrar cobranza")
        print("9. Ver cobranzas registradas")
        print("10. Buscar cobranzas por nombre")
        print("0. Salir")
        

        opcion = input("Selecciona una opción: ")

        if opcion == "1":
            agregar_persona()
        elif opcion == "2":
            ver_personas()
        elif opcion == "3":
            registrar_reunion()
        elif opcion == "4":
            ver_reuniones()
        elif opcion == "5":
            registrar_permiso()
        elif opcion == "6":
            ver_permisos()
        elif opcion == "7":
            buscar_permisos_por_nombre()
        elif opcion == "8":
            registrar_cobranza()
        elif opcion == "9":
            ver_cobranzas()
        elif opcion == "10":
            buscar_cobranzas_por_nombre()
        elif opcion == "0":
            print("👋 Saliendo del programa...")
            break
        else:
            print("❌ Opción no válida. Intenta otra vez.")

def agregar_persona():
    conexion = sqlite3.connect("moto_carga.db")
    cursor = conexion.cursor()

    nombre = input("Nombre completo: ")
    dni = input("DNI: ")
    placa = input("Placa de la moto: ")

    cursor.execute("INSERT INTO personas (nombre, dni, placa) VALUES (?, ?, ?)", (nombre, dni, placa))
    conexion.commit()
    conexion.close()
    print("✅ Persona registrada correctamente.")

def ver_personas():
    conexion = sqlite3.connect("moto_carga.db")
    cursor = conexion.cursor()

    cursor.execute("SELECT * FROM personas")
    personas = cursor.fetchall()

    print("\n--- Lista de personas registradas ---")
    for persona in personas:
        print(f"ID: {persona[0]}, Nombre: {persona[1]}, DNI: {persona[2]}, Placa: {persona[3]}")
    conexion.close()
def registrar_reunion():
    conexion = sqlite3.connect("moto_carga.db")
    cursor = conexion.cursor()

    fecha = input("Fecha de la reunión (YYYY-MM-DD): ")
    descripcion = input("Descripción o tema de la reunión: ")

    cursor.execute("INSERT INTO reuniones (fecha, descripcion) VALUES (?, ?)", (fecha, descripcion))
    conexion.commit()
    conexion.close()
    print("✅ Reunión registrada correctamente.")

def ver_reuniones():
    conexion = sqlite3.connect("moto_carga.db")
    cursor = conexion.cursor()

    cursor.execute("SELECT * FROM reuniones ORDER BY fecha DESC")
    reuniones = cursor.fetchall()

    print("\n--- Reuniones Registradas ---")
    for reunion in reuniones:
        print(f"ID: {reunion[0]}, Fecha: {reunion[1]}, Tema: {reunion[2]}")

    
    conexion.close()

def registrar_permiso():
    conexion = sqlite3.connect("moto_carga.db")
    cursor = conexion.cursor()

    ver_personas()  # Para mostrar los ID de personas registradas
    persona_id = input("Ingrese el ID de la persona que solicita permiso: ")
    motivo = input("Motivo del permiso: ")
    fecha = input("Fecha del permiso (YYYY-MM-DD): ")

    cursor.execute("""
        INSERT INTO permisos (persona_id, motivo, fecha) 
        VALUES (?, ?, ?)
    """, (persona_id, motivo, fecha))

    conexion.commit()
    conexion.close()
    print("✅ Permiso registrado correctamente.")

def ver_permisos():
    conexion = sqlite3.connect("moto_carga.db")
    cursor = conexion.cursor()

    cursor.execute("""
        SELECT permisos.id, personas.nombre, permisos.motivo, permisos.fecha 
        FROM permisos
        JOIN personas ON permisos.persona_id = personas.id
        ORDER BY permisos.fecha DESC
    """)
    permisos = cursor.fetchall()

    print("\n--- Permisos Registrados ---")
    for permiso in permisos:
        print(f"ID: {permiso[0]}, Persona: {permiso[1]}, Motivo: {permiso[2]}, Fecha: {permiso[3]}")

    conexion.close()
    
def buscar_permisos_por_nombre():
    conexion = sqlite3.connect("moto_carga.db")
    cursor = conexion.cursor()

    nombre = input("🔎 Ingresa el nombre (o parte del nombre): ")

    cursor.execute("""
        SELECT personas.nombre, permisos.motivo, permisos.fecha
        FROM permisos
        JOIN personas ON permisos.persona_id = personas.id
        WHERE personas.nombre LIKE ?
        ORDER BY permisos.fecha DESC
    """, ('%' + nombre + '%',))

    resultados = cursor.fetchall()

    print("\n--- Permisos encontrados ---")
    if resultados:
        for fila in resultados:
            print(f"Nombre: {fila[0]}, Motivo: {fila[1]}, Fecha: {fila[2]}")
    else:
        print("❌ No se encontraron permisos con ese nombre.")

    conexion.close()
def registrar_cobranza():
    conexion = sqlite3.connect("moto_carga.db")
    cursor = conexion.cursor()

    # Mostrar personas para elegir el ID
    ver_personas()
    persona_id = input("Ingrese el ID de la persona que realizó el pago: ")
    monto = input("Monto cobrado (ej. 1.00 o 2.00): ")
    fecha = input("Fecha del cobro (YYYY-MM-DD): ")

    cursor.execute("""
        INSERT INTO cobranzas (persona_id, monto, fecha)
        VALUES (?, ?, ?)
    """, (persona_id, monto, fecha))

    conexion.commit()
    conexion.close()
    print("✅ Cobranza registrada correctamente.")

def ver_cobranzas():
    conexion = sqlite3.connect("moto_carga.db")
    cursor = conexion.cursor()

    cursor.execute("""
        SELECT cobranzas.id, personas.nombre, cobranzas.monto, cobranzas.fecha
        FROM cobranzas
        JOIN personas ON cobranzas.persona_id = personas.id
        ORDER BY cobranzas.fecha DESC
    """)
    cobranzas = cursor.fetchall()

    print("\n--- Cobranzas Registradas ---")
    for cobro in cobranzas:
        print(f"ID: {cobro[0]}, Nombre: {cobro[1]}, Monto: S/.{cobro[2]}, Fecha: {cobro[3]}")
    
    conexion.close()

def buscar_cobranzas_por_nombre():
    conexion = sqlite3.connect("moto_carga.db")
    cursor = conexion.cursor()

    nombre = input("Ingrese el nombre para buscar cobranzas: ")

    cursor.execute("""
        SELECT cobranzas.id, personas.nombre, cobranzas.monto, cobranzas.fecha
        FROM cobranzas
        JOIN personas ON cobranzas.persona_id = personas.id
        WHERE personas.nombre LIKE ?
        ORDER BY cobranzas.fecha DESC
    """, ('%' + nombre + '%',))

    resultados = cursor.fetchall()

    print("\n--- Resultados de búsqueda de cobranzas ---")
    for cobro in resultados:
        print(f"ID: {cobro[0]}, Nombre: {cobro[1]}, Monto: S/.{cobro[2]}, Fecha: {cobro[3]}")
    
    conexion.close()

# Iniciar el menú
menu()
