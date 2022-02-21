
#if 0
//VT 102 COD 001

int main()
{
    int id{ 1 };
    int edad{ 17 };
    double tutorId{ 2.5 };

    return 0;
}





//VT 102 COD 002
#include <iostream>

void imprimirAlumno(int id, int edad, double tutorId)
{
    std::cout << "ID:   " << id << '\n';
    std::cout << "Edad:  " << edad << '\n';
    std::cout << "ID Tutor: " << tutorId << '\n';
}

int main()
{
    int id{ 1 };
    int edad{ 17 };
    double tutorId{ 2.5 };

   imprimirAlumno(id, edad, tutorId);

    return 0;
}






//VT 102 COD 003

#include <iostream>

struct Alumno
{
    int id{};
    int edad{};
    double tutorId{};
};

void imprimirAlumno(const Alumno& alumno) // observa que se pasa por referencia aquí
{
    std::cout << "ID:   " << alumno.id << '\n';
    std::cout << "Edad:  " << alumno.edad << '\n';
    std::cout << "ID del Tutor: " << alumno.tutorId << '\n';
}

int main()
{
    Alumno juan{ 7, 18, 3.1 };
    Alumno francisco{ 15, 16, 2.1 };

    // Imprimir información de Juan
    imprimirAlumno(juan);

    std::cout << '\n';

    // Imprimir información Francisco
    imprimirAlumno(francisco);

    return 0;
}


//VT 102 COD 004
#include <iostream>

struct Punto3d
{
    double x{ 0.0 };
    double y{ 0.0 };
    double z{ 0.0 };
};

Punto3d obtenerPuntoCero()
{
    // Podemos crear una variable y devolver la variable (lo mejoraremos)
    /*Punto3d temp{0.0, 0.0, 0.0};
    return temp;*/

    return {};
}

int main()
{
    Punto3d cero{ obtenerPuntoCero() };

    if (cero.x == 0.0 && cero.y == 0.0 && cero.z == 0.0)
        std::cout << "El punto es cero\n";
    else
        std::cout << "El punto no es cero\n";

    return 0;
}




Punto3d obtenerPuntoCero()
{
    // Podemos crear una variable y devolver la variable (lo mejoraremos)
    Punto3d temp{ 0.0, 0.0, 0.0 };
    return temp;
}

Punto3d obtenerPuntoCero()
{
    return Punto3d{ 0.0, 0.0, 0.0 }; // return un Punto3d sin nombre
}

Punto3d obtenerPuntoCero()
{
    // Ya hemos especificado el tipo de retorno en la declaración de la función
    // así que no tenemos que volver a hacerlo de nuevo
    return { 0.0, 0.0, 0.0 }; // devuelve un Punto3d sin nombre
}

Punto3d obtenerPuntoCero()
{
    // podemos usar llaves vacías para inicializar todos los miembros por valor
    return {};
}





//VT 102 COD 005
#include <iostream>

struct Alumno
{
    int id{};
    int edad{};
    double tutorId{};
};

struct Instituto
{
    int numeroDeAlumnos{};
    Alumno Delegado{}; // Alumno es una struct dentro de la struct Instituto
};

int main()
{
    Instituto miInstituto{ 7, { 1, 18, 3.5 } }; // Lista de inicialización anidada para inicializar Alumno
    std::cout << miInstituto.Delegado.id; // imprime la edad del Delegado
}

#endif




#include <iostream>

struct Instituto
{
    struct Alumno // accedido a través de Instituto::Alumno
    {
        int id{};
        int age{};
        double wage{};
    };

    int numeroDeAlumnos{};
    Alumno Delegado{}; // Alumno es una struct dentro de la struct Instituto
};

int main()
{
    Instituto miInstituto{ 7, { 1, 18, 3.5 } }; // Lista de inicialización anidada para inicializar Alumno
    std::cout << miInstituto.Delegado.id; // imprime la edad del Delegado
}

#if 0
#endif