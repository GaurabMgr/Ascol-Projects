<?xml version="1.0"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
  <html><body>
    <table border="1">
      <tr><th>Title</th><th>Author</th></tr>
      <xsl:for-each select="Library/Book">
        <tr>
          <td><xsl:value-of select="Title"/></td>
          <td><xsl:value-of select="Author"/></td>
        </tr>
      </xsl:for-each>
    </table>
    <p><xsl:value-of select="Library/Author"/></p>
  </body></html>
</xsl:template>
</xsl:stylesheet>