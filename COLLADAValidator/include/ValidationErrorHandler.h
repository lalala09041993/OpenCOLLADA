#ifndef ___VALIDATIONERRORHANDLER_H__
#define ___VALIDATIONERRORHANDLER_H__

#include "COLLADASaxFWLIErrorHandler.h"

class ValidationErrorHandler : public	COLLADASaxFWL::IErrorHandler
{
private:
	bool mHasHandledError;

public:
	ValidationErrorHandler();
	virtual ~ValidationErrorHandler();

	bool virtual handleError(const COLLADASaxFWL::IError* error);

	bool hasHandledError()const {return mHasHandledError; }


private:
	/** Disable default copy ctor. */
	ValidationErrorHandler( const ValidationErrorHandler& pre );
	/** Disable default assignment operator. */
	const ValidationErrorHandler& operator= ( const ValidationErrorHandler& pre );

};

#endif // ___VALIDATIONERRORHANDLER_H__