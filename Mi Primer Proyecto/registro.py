import sqlite3

def menu():
    while True:
        print("\n--- MENÚ PRINCIPAL ---")
        print("1. Agregar persona")
        print("2. Ver personas registradas")
        print("3. Salir")

        opcion = input("Selecciona una opción: ")

        if opcion == "1":
            agregar_persona()
        elif opcion == "2":
            ver_personas()
        elif opcion == "3":
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

# Iniciar el menú
menu()
