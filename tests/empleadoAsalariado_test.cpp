#include <gtest/gtest.h>
#include "../src/empleadoAsalariado.h"

namespace
{
    TEST(empleadoAsalariado_Test, Test_Calcular_Pago_Bruto)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoAsalariado *empleado = new empleadoAsalariado(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        float actual = empleado->calculoPagoBruto();
        float esperado = 500;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(empleadoAsalariado_Test, Test_Calcular_Pago_Neto)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoAsalariado *empleado = new empleadoAsalariado(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        float actual = empleado->calculoPagoNeto();
        float esperado = (500)*(0.93);

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(empleadoAsalariado_Test, Test_Calcular_Impuestos)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoAsalariado *empleado = new empleadoAsalariado(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        float actual = empleado->calculoImpuestos();
        float esperado = (500)*(0.07);

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(empleadoAsalariado_Test, Test_Obtener_Id)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoAsalariado *empleado = new empleadoAsalariado(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        int actual = empleado->obtenerIdEmpleado();
        int esperado = 2;

        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }

    TEST(empleadoAsalariado_Test, Test_Obtener_Id_Supervisor)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoAsalariado *empleado = new empleadoAsalariado(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        int actual = empleado->obtenerIdSupervisor();
        int esperado = 1;

        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }

    TEST(empleadoAsalariado_Test, Test_Obtener_Nombre_Completo)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoAsalariado *empleado = new empleadoAsalariado(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        std::string actual = empleado->obtenerNombreCompleto();
        std::string esperado = "Juan Aguilar";

        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }

    TEST(empleadoAsalariado_Test, Test_Insertar_SubEmpleado)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoAsalariado *empleado1 = new empleadoAsalariado(1, "Juan", "Aguilar", 1, 500);
        empleadoAsalariado *empleado2 = new empleadoAsalariado(2, "Juan", "Aguilar", 1, 250);

        // Act - ejecute la operación
        empleado1->insertarSub(empleado2);

        vector<empleado *> subEmpleados = empleado1->obtenerSubEmpleados();
        empleado *empleadoActual = subEmpleados[0];

        // Assert - valide los resultados
        EXPECT_EQ(empleado2, empleadoActual);
    }

    TEST(empleadoAsalariado_Test, Test_Obtener_Información_de_Salida)
    {
        /// AAA

        // Arrange - configurar el escenario
        empleadoAsalariado *empleado = new empleadoAsalariado(2, "Juan", "Aguilar", 1, 500);

        // Act - ejecute la operación
        std::string actual = empleado->obtenerInformacion();
        std::string esperado = "1,Juan Aguilar";

        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }
}