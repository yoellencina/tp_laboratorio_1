#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
/** \brief Pide un n�mero y lo retorna en la variable A.
 * \return Retorna un n�mero de tipo float.
 */
float IngresarA ();

/** \brief Pide un n�mero y lo retorna en la variable B.
 * \return Retorna un n�mero de tipo float.
 */
float IngresarB ();

/** \brief Pide dos n�meros, los suma.
 * \param Pide un n�mero que se deposita en A.
 * \param Pide un n�mero que se deposita en B.
 */
void Sumar (float,float);

/** \brief Pide dos n�meros, los resta.
 * \param Pide un n�mero que se deposita en A.
 * \param Pide un n�mero que se deposita en B.
 */
void Restar (float, float);

/** \brief Pide dos n�meros y los divide.
 * \param Pide un n�mero que se deposita en A.
 * \param Pide un n�mero que se deposita en B.
 */
void Dividir (float, float);

/** \brief Pide dos n�meros y los multiplica.
 * \param Pide un n�mero que se deposita en A.
 * \param Pide un n�mero que se deposita en B.
 */
void Multiplicar (float, float);

/** \brief Pide el n�mero A y realiza el factorial.
 * \param pide un n�mero y se deposita en A.
 */
void Factorial (float);

/** \brief Pide dos n�meros y realiza todas las operaciones
 * \param Pide un n�mero que se deposita en A.
 * \param Pide un n�mero que se deposita en B.
 */
void realizarTodo (float, float);

#endif // FUNCIONES_H_INCLUDED
