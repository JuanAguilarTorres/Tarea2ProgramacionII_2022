#include <gtest/gtest.h>
#include "../src/empleadoPorHoras.h"

namespace
{
    TEST(empleadoPorHoras_Test, Test_Calcular_Pago_Bruto)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoPorHoras *empleado = new empleadoPorHoras(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        float actual = empleado->calculoPagoBruto();
        float esperado = 500;

        delete empleado;
        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(empleadoPorHoras_Test, Test_Calcular_Pago_Neto)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoPorHoras *empleado = new empleadoPorHoras(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        float actual = empleado->calculoPagoNeto();
        float esperado = 500;

        delete empleado;
        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(empleadoPorHoras_Test, Test_Calcular_Impuestos)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoPorHoras *empleado = new empleadoPorHoras(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        float actual = empleado->calculoImpuestos();
        float esperado = 0;

        delete empleado;
        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(empleadoPorHoras_Test, Test_Obtener_Id)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoPorHoras *empleado = new empleadoPorHoras(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        int actual = empleado->obtenerIdEmpleado();
        int esperado = 2;

        delete empleado;
        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }

    TEST(empleadoPorHoras_Test, Test_Obtener_Id_Supervisor)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoPorHoras *empleado = new empleadoPorHoras(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        int actual = empleado->obtenerIdSupervisor();
        int esperado = 1;

        delete empleado;
        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }

    TEST(empleadoPorHoras_Test, Test_Obtener_Nombre_Completo)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoPorHoras *empleado = new empleadoPorHoras(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        std::string actual = empleado->obtenerNombreCompleto();
        std::string esperado = "Juan Aguilar";

        delete empleado;
        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }

    TEST(empleadoPorHoras_Test, Test_Insertar_SubEmpleado)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoPorHoras *empleado1 = new empleadoPorHoras(1, "Juan", "Aguilar", 1, 500);
        empleadoPorHoras *empleado2 = new empleadoPorHoras(2, "Juan", "Aguilar", 1, 250);

        // Act - ejecute la operación
        empleado1->insertarSub(empleado2);

        vector<empleado *> subEmpleados = empleado1->obtenerSubEmpleados();
        empleado *empleadoActual = subEmpleados[0];

        // Assert - valide los resultados
        EXPECT_EQ(empleado2, empleadoActual);

        delete empleado1;

    }

    TEST(empleadoPorHoras_Test, Test_Obtener_Informacion_de_Salida)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoPorHoras *empleado = new empleadoPorHoras(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        std::string actual = empleado->obtenerInformacion();
        std::string esperado = "2,Juan Aguilar";

        delete empleado;
        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }
}