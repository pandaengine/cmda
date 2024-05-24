
::@set pwd=%~dp0
@set pwd="%cd%"
@set buildPath="%cd%\~build"

@if not exist %buildPath% (
	@mkdir %buildPath%
)

@cd /D %buildPath%
:: cmake %pwd% -A win32
cmake %pwd%
@cd /D %pwd%

@pause
